#include<stdio.h>

int bi(int n, int k);

int main(int argc, char** argv)
{
	int n = 0;
	int k = 0;
	scanf_s("%d %d", &n, &k);

	printf("%d", bi(n, k));
	return 0;
}

int bi(int n, int k)
{
	if (k == 0 || k == n)
	{
		return 1;
	}

	return bi(n - 1, k - 1) + bi(n - 1, k);
}