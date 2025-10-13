#include<stdio.h>

int main(int argc, char** argv)
{
	int num = 0;
	int max = -10000;
	int cooler_max = -10000;

	do
	{
		scanf_s("%d", &num);
		if (num == 0)
		{
			break;
		}
		if (num > max)
		{
			cooler_max = max;
			max = num;
		}
		else if (num > cooler_max)
		{
			cooler_max = num;
		}
	} while(true);

	printf("%d", cooler_max);
	return 0;
}