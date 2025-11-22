#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool Compare(char S1[], char S2[]);

int main(int argc, char** argv)
{
	char s1[100];
	char s2[100];
	scanf_s("%99[^\n]", s1, (unsigned)sizeof(s1));
	getchar();
	scanf_s("%99[^\n]", s2, (unsigned)sizeof(s2));

	if (Compare(s1, s2))
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
bool Compare(char S1[], char S2[])
{
	int i = 0;
	while (S1[i] != '\0' && S2[i] != '\0')
	{
		if (S1[i] != S2[i])
		{
			return false;
		}
		i++;
	}
	return (S1[i] == '\0' && S2[i] == '\0');
}