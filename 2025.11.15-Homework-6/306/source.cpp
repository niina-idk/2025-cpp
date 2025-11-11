#include<stdio.h>

int min(int a, int b, int c, int d);

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	scanf_s("%d %d %d %d", &a, & b, &c, &d);

	printf("%d", min(a, b, c, d));
	return 0;
}

int min(int a, int b, int c, int d)
{
	int qt[4] = { a, b, c, d };
	int min = a;
	for (int i = 0; i < 4; ++i)
	{
		if (qt[i] < min)
		{
			min = qt[i];
		}
	}
	return min;
}