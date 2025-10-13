#include<stdio.h>

int main(int argc, char** argv)
{
	int i = 0;
	int curry = 0;
	int max = 0;
	scanf_s("%d", &i);

	for (int n = 0; n < i; n++)
	{
		int qt = 0;
		scanf_s("%d", &qt);

		if (qt > 0)
		{
			++curry;
			if (curry > max)
			{
				max = curry;
			}
		}
		else
		{
			curry = 0;
		}
	}

	printf("%d", max);
	return 0;
}