#include<stdio.h>
#define SIZE 1000

int main(int argc, char** argv)
{
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	scanf_s("%d %d %d %d %d", &n, &a, &b, &c, &d);

	int poteto[SIZE];
	for (int i = 0; i < n; ++i)
	{
		poteto[i] = i + 1;
	}

	int ai = a - 1;
	int bi = b - 1;
	while (ai < bi)
	{
		int tutu = poteto[ai];
		poteto[ai] = poteto[bi];
		poteto[bi] = tutu;
		++ai;
		--bi;
	}

	int ci = c - 1;
	int di = d - 1;
	while (ci < di)
	{
		int tutu = poteto[ci];
		poteto[ci] = poteto[di];
		poteto[di] = tutu;
		++ci;
		--di;
	}

	printf("%d", poteto[0]);
	for (int i = 1; i < n; ++i)
	{
		printf(" %d", poteto[i]);
	}

	return 0;
}