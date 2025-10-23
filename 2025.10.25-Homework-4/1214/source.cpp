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

	int x = 0;
	scanf_s("%d", &x);

	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == x)
		{
			++count;
		}
	}

	printf("%d", count);
	return 0;
}