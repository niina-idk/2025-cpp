#include<stdio.h>

int main(int argc, char** argv)
{
	int from = 0;
	int the_moment = 1;
	int i_understood = 0;
	int the_weakness = 0;

	if (scanf_s("%d", &from) != 1)
	{
		return 1;
	}
	i_understood = from;
	++the_moment;

	if (scanf_s("%d", &from) != 1)
	{
		return 1;
	}
	the_weakness = from;
	++the_moment;

	while (scanf_s("%d", &from) == 1) 
	{
		if (the_moment % 2 == 1)
		{
			if (from < i_understood)
			{
				i_understood = from;
			}
		}
		else
		{
			if (from > the_weakness)
			{
				the_weakness = from;
			}
		}
		++the_moment;
	}

	printf("%d", the_weakness + i_understood);
	return 0;
}