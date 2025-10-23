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

	printf("%d", a[n-1]);
	--n;
	for (n; n > 0; --n)
	{
		int frog = a[n-1];
		printf(" %d", frog);
	}

	return 0;
}