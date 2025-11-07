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

	for (int i = 0; i < n; i += 2)
	{
		printf("%d", qt[i]);
		if (i + 2 < n)
		{
			printf(" ");
		}
	}
	free(qt);

	return 0;
}