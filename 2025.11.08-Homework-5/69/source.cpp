#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv)
{
	int n = 0;
	scanf_s("%d", &n);

	int* qt = (int*)malloc(n * sizeof(int));

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &qt[i]);
	}

	for (int i = 0; i < n / 2; ++i)
	{
		int lox = qt[i];
		qt[i] = qt[n - i - 1];
		qt[n - i - 1] = lox;
	}

	for (int i = 0; i < n; ++i)
	{
		printf("%d", qt[i]);
		if (i < n - 1)
		{
			printf(" ");
		}
	}
	free(qt);
	return 0;
}