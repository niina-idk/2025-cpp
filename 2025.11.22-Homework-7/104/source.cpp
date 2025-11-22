#include<stdio.h>
#include<string.h>

unsigned char changereg(unsigned char c);

int main(int argc, char** argv)
{
	unsigned char c;
	scanf_s("%ñ", &c);

	unsigned char qt = changereg(c);
	printf("%c", qt);
	return 0;
}

unsigned char changereg(unsigned char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return c - ('a' - 'A');
	}
	if (c >= 'A' && c <= 'Z')
	{
		return c - ('A' - 'a');
	}
	return c;
}