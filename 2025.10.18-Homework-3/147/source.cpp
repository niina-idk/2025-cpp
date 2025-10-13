#include<stdio.h>

int main(int argc, char** argv)
{
	int n = 0;
	scanf_s("%d", &n);

	if (n == 0)
	{
		printf("0");
	}
	else if (n == 1)
	{
		printf("1");
	}
    else
	{
		int k = 2;
		int hoho = 0;
		int hehe = 1;
		int go_to = 0;
		while (k <= n)
		{
			go_to = hoho + hehe;
			hoho = hehe;
			hehe = go_to;
			++k;
		}
		printf("%d", hehe);
	}
	return 0;
}