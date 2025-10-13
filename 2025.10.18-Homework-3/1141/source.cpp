#include<stdio.h>

int main(int argc, char** argv)
{
	int of_the_blessed_machine = 0;
	int for_the_machine = -10000000000;
	int is_immortal = 0;
	int voices = 0;

	do
	{
		scanf_s("%d", &of_the_blessed_machine);
		if (of_the_blessed_machine == 0)
		{
			break;
		}
		if (of_the_blessed_machine == for_the_machine)
		{
			++is_immortal;
		}
		else
		{
			if (is_immortal > voices)
			{
				voices = is_immortal;
			}
			for_the_machine = of_the_blessed_machine;
			is_immortal = 1;
		}
	} while (true);

	if (is_immortal > voices)
	{
		voices = is_immortal;
	}

	printf("%d", voices);
	return 0;
}