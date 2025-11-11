#include<stdio.h>

double power(double a, int n);

int main(int argc, char** argv)
{
	double a = 0;
	int n = 0;
	scanf_s("%lf %d", &a, &n);

	printf("%lf", power(a, n));
	return 0;
}

double power(double a, int n)
{
	if (n == 0)
	{
		return 1.0;
	}

	if (n < 0)
	{
		return 1.0 / power(a, -n);
	}

	if (n > 0)
	{
		return a * power(a, n - 1);
	}
}