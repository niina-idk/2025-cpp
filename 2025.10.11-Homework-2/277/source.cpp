#include<stdio.h>

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d %d %d", &a, &b, &c);

	int uzhe = 0;

	if (a != 0)
	{
		printf("%d", a);
		uzhe = 1;
	}

	if (b != 0)
	{
		if (uzhe == 1 && b > 0)
		{
			printf("+");
		}
		if (b == -1)
		{
			printf("-x");
		}
		else if (b == 1)
		{
			printf("x");
		}
		else
		{
			printf("%dx", b);
		}
		uzhe = 1;
	}

	if (c != 0)
	{
		if (uzhe == 1 && c > 0)
		{
			printf("+");
		}
		if (c == -1)
		{
			printf("-y");
		}
		else if (c == 1)
		{
			printf("y");
		}
		else
		{
			printf("%dy", c);
		}
		uzhe = 1;
	}

	if (uzhe == 0)
	{
		printf("0");
	}
	return 0;
}