#include<stdio.h>
#define SIZE 1000

int main(int argc, char** argv)
{
	int n = 0;
	scanf_s("%d", &n);

	int a[SIZE];
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
	}

	int max = -100000;
	int min = 100000;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
		if (a[i] < min)
		{
			min = a[i];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		if (a[i] == max)
		{
			a[i] = min;
		}
	}
	
	printf("%d", a[0]);
	for (int i = 1; i < n; ++i)
	{
		printf(" %d", a[i]);
	}

	return 0;
}