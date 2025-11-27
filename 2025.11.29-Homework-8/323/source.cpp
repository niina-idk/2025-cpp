#include<stdio.h>

struct Point
{
	int x;
	int y;
};

int main(int argc, char** argv)
{
	int n = 0;
	scanf_s("%d", &n);

	struct Point qt[100];
	double smthx = 0.0, smthy = 0.0;

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d %d", &qt[i].x, &qt[i].y);
		smthx += qt[i].x;
		smthy += qt[i].y;
	}
	double centrx = smthx / n;
	double centry = smthy / n;
	printf("%.15g %.15g", centrx, centry);
	return 0;
}