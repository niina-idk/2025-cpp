#include<stdio.h>

int main(int argc, char** argv)
{
	int n = 0;
	scanf_s("%d", &n);
	int a = n / 100000 % 10;
	int b = n / 10000 % 10;
	int c = n / 1000 % 10;
	int d = n / 100 % 10;
	int e = n / 10 % 10;
	int f = n % 10;

	if (a + b + c == d + e + f)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}