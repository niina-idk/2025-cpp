#include<stdio.h>
#include<math.h>

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

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d %d", &qt[i].x, &qt[i].y);
	}
	
	double max = 0.0;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			double dx = qt[i].x - qt[j].x;
			double dy = qt[i].y - qt[j].y;
			double dst = sqrt(dx * dx + dy * dy);
			if (max < dst)
			{
				max = dst;
			}
		}
	}
	printf("%.15g", max);
	return 0;
}