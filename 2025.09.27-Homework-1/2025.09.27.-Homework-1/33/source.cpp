#include <stdio.h>

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);
	int sum = a + b - 1;
	printf("%d %d", sum - a, sum - b);
	return 0;
}