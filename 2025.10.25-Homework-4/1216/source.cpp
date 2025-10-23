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

	int l = 0;
	int r = 0;
	scanf_s("%d %d", &l, &r);

	int max = -10000;
	int imax = 0;
	for (int i = (l - 1); i <= (r - 1); ++i)
	{
		if (a[i] > max)
		{
			max = a[i];
			imax = i + 1;
		}
	}
	
	printf("%d %d", max, imax);
	return 0;
}