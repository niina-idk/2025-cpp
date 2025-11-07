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

	int counter = 0;
	for (int i = 1; i < n - 1; ++i)
	{
		if (qt[i - 1] < qt[i] && qt[i + 1] < qt[i])
		{
			++counter;
		}
	}
	printf("%d", counter);
	free(qt);
	return 0;
}