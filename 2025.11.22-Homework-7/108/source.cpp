#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(int argc, char** argv)
{
	char n[1000];
	scanf("%s", n);

	int len = strlen(n);
	bool isPalindrome = true;

	for (int i = 0; i < len / 2; i++) 
	{
		if (n[i] != n[len - 1 - i]) 
		{
			isPalindrome = false;
			break;
		}
	}
	if (isPalindrome) 
	{
		printf("yes");
	}
	else 
	{
		printf("no");
	}
	return 0;
}