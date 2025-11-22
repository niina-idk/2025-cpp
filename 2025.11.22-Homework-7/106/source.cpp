#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(int argc, char** argv)
{
	char qt[1000];
	scanf("%[^\n]", qt);

	int count = 0;
	int flag = 0;

	for (int i = 0; qt[i] != '\0'; i++)
	{
		if (qt[i] != ' ')
		{
			if (!flag)
			{
				count++;
				flag = 1;
			}
		}
		else
		{
			flag = 0;
		}
	}
	printf("%d", count);
	return 0;
}