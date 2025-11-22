#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(int argc, char** argv)
{
	char qt[1000];
	scanf("%[^\n]", qt);

	int max = 0;
	int cur = 0;
	int start = 0;
	int coolerst = 0;
	int i;

	for (i = 0; qt[i] != '\0'; i++)
	{
		if (qt[i] != ' ')
		{
			cur++;
			if (cur == 1)
			{
				start = i;
			}
		}
		else 
		{
			if (cur > max) 
			{
				max = cur;
				coolerst = start;
			}
			cur = 0;
		}
	}
	if (cur > max) 
	{
		max = cur;
		coolerst = start;
	}
	for (i = coolerst; i < coolerst + max; i++) 
	{
		printf("%c", qt[i]);
	}
	printf("\n%d", max);
	return 0;
}