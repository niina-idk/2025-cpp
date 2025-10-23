#include<stdio.h>
#include<math.h>
#define SIZE 1000

int main(int argc, char** argv)
{
	int n = 0;
	scanf_s("%d", &n);

	int a[SIZE];
	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
	}

	int x = 0;
	scanf_s("%d", &x);

	int dif = 1000000;
	int qt = 0;
	for (int i = 0; i < n; ++i)
	{
		if ((abs(a[i] - x) < dif) || (abs(a[i] - x) == dif && a[i] < qt))
		{
			dif = abs(a[i] - x);
			qt = a[i];
		}
	}
	printf("%d", qt);
	return 0;
}