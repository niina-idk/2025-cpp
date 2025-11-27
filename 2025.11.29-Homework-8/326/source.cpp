#include<stdio.h>
#include<math.h>

struct Point
{
	int x;
	int y;
};

double dist(struct Point a, struct Point b);
int tring(struct Point a, struct Point b, struct Point c);

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
			for (int u = j + 1; u < n; u++)
			{
				if (tring(qt[i], qt[j], qt[u]))
				{
					double a = dist(qt[i], qt[j]);
					double b = dist(qt[j], qt[u]);
					double c = dist(qt[u], qt[i]);

					double perc = a + b + c;

					if (perc > max)
					{
						max = perc;
					}
				}
			}
		}
	}
	printf("%.15g", max);
	return 0;
}

double dist(struct Point a, struct Point b)
{
	double dx = a.x - b.x;
	double dy = a.y - b.y;
	return sqrt(dx * dx + dy * dy);
}

int tring(struct Point a, struct Point b, struct Point c)
{
	double ar = (b.x - a.x) * (c.y - a.y) - (c.x - a.x) * (b.y - a.y);
	return fabs(ar) > 0;
}