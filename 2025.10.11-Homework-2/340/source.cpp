#include<stdio.h>

int main(int argc, char** argv)
{
	int a1 = 0;
	int b1 = 0;
	int c1 = 0;
	int a2 = 0;
	int b2 = 0;
	int c2 = 0;
	scanf_s("%d %d %d", &a1, &b1, &c1);
	scanf_s("%d %d %d", &a2, &b2, &c2);

	int yo;

	if (a1 > b1)
	{
		yo = a1;
		a1 = b1;
		b1 = yo;
	}
	if (a1 > c1)
	{
		yo = a1;
		a1 = c1;
		c1 = yo;
	}
	if (b1 > c1)
	{
		yo = b1;
		b1 = c1;
		c1 = yo;
	}
	if (a2 > b2)
	{
		yo = a2;
		a2 = b2;
		b2 = yo;
	}
	if (a2 > c2)
	{
		yo = a2;
		a2 = c2;
		c2 = yo;
	}
	if (b2 > c2)
	{
		yo = b2;
		b2 = c2;
		c2 = yo;
	}
	if (a1 == a2 && b1 == b2 && c1 == c2)
	{
		printf("Boxes are equal");
	}
	else if (a1 <= a2 && b1 <= b2 && c1 <= c2 && (a1 < a2 || b1 < b2 || c1 < c2))
	{
		printf("The first box is smaller than the second one");
	}
	else if (a1 >= a2 && b1 >= b2 && c1 >= c2 && (a1 > a2 || b1 > b2 || c1 > c2))
	{
		printf("The first box is larger than the second one");
	}
	else
	{
		printf("Boxes are incomparable");
	}
	return 0;
}