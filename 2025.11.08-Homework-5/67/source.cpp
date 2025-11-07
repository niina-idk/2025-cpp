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

	int pupupu = 0;
	for (int i = 0; i < n; ++i)
	{
		int okak = qt[i]/(abs(qt[i]));
		int nokak = qt[i-1]/(abs(qt[i-1]));
		
		if (okak == nokak)
		{
			++pupupu;
			break;
		}
	}
	if (pupupu == 0)
	{
		printf("NO");
	}
	else
	{
		printf("YES");
	}
	free(qt);
	return 0;
}