#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(int argc, char** argv)
{
	char n[1000];
	scanf("%s", n);

	int len = strlen(n);

	for (int i = 0; i < len; i++)
	{
		int frequency = 0;
		for (int j = 0; j < len; j++)
		{
			if (n[i] == n[j])
			{
				frequency++;
			}
		}
		if (frequency == 2)
		{
			printf("%c", n[i]);
			break;
		}
	}
	return 0;
}