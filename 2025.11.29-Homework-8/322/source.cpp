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
	int max = 0;
	long long xd = 0;

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d %d", &qt[i].x, &qt[i].y);
		long long ds = (long long)qt[i].x * qt[i].x + (long long)qt[i].y * qt[i].y;

		if (ds > xd)
		{
			xd = ds;
			max = i;
		}
	}

	printf("%d %d", qt[max].x, qt[max].y);
	return 0;
}