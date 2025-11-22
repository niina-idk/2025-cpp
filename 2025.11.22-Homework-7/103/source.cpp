#include<stdio.h>
#include<string.h>

unsigned char ToUpper(unsigned char c);

int main(int argc, char** argv)
{
	unsigned char c;
	scanf_s("%ñ", &c);

	unsigned char qt = ToUpper(c);
	printf("%c", qt);
	return 0;
}

unsigned char ToUpper(unsigned char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return c - ('a' - 'A');
	}
	return c;
}