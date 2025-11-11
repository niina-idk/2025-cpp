#include<stdio.h>

void prime(int n);

int main(int argc, char** argv)
{
	int n = 0;
	scanf_s("%d", &n);

	prime(n);
	return 0;
}

void prime(int n)
{
	int boom = 0;
	for (int i = 2; i < (n ^ (1 / 2)); ++i)
	{
		if (n % i == 0)
		{
			boom += 1;
			printf("composite");
			break;
		}
	}
	if (boom == 0)
	{
		printf("prime");
	}
}