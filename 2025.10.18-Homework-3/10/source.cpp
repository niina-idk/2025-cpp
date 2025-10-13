#include<stdio.h>

int main(int argc, char** argv)
{
	int hewlo = 0;
	int hows = 0;
	int it = 0;
	int going = 0;
	scanf_s("%d %d %d %d", &hewlo, &hows, &it, &going);

	int cant = 0;
	int wan = 1;

	for (int x = -100; x <= 100; ++x)
	{
		long long fist = (long long)hewlo * x * x * x;
		long long scond = (long long)hows * x * x;
		long long trd = (long long)it * x;
		long long meath = fist + scond + trd + going;

		if (meath == 0)
		{
			if (wan == 1)
			{
				printf("%d", x);
				wan = 0;
			}
			else
			{
				printf(" %d", x);
			}
			++cant;
			if (cant == 3)
			{
				break;
			}
		}
	}
	return 0;
}