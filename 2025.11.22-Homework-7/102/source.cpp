#include<stdio.h>
#include<string.h>
#include <stdbool.h>

bool IsDigit(unsigned char c);

int main(int argc, char** argv)
{
	unsigned char n;
	scanf_s("%ñ", &n);

	if (IsDigit(n))
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
bool IsDigit(unsigned char c)
{
	return (c >= '0' && c <= '9');
}