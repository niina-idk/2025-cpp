#include<stdio.h>
#include<math.h>

int main(int argc, char** argv)
{
	double a = 0;
	double b = 0;
	double c = 0;
	scanf_s("%lf %lf %lf", &a, &b, &c);

	if (a == 0 && b == 0 && c == 0)
	{
		printf("-1\n");
	}
	else if (a == 0 && b == 0)
	{
		printf("0\n");
	}
	else if (a == 0)
	{
		double x = -c / b;
		printf("1\n");
		printf("%lf", x);
	}
	else
	{
		double D = b * b - 4 * a * c;

		if (D < 0)
		{
			printf("0");
		}

		else if (D == 0)
		{
			double x = -b / (2 * a);
			printf("1\n");
			printf("%lf", x);
		}
		else
		{
			double x1 = (-b - sqrt(D)) / (2 * a);
			double x2 = (-b + sqrt(D)) / (2 * a);
			if (x1 > x2)
			{
				double q = x1;
				x1 = x2;
				x2 = q;
			}
			printf("2\n");
			printf("%lf\n%lf", x1, x2);
		}
	}
	return 0;
}