#include<stdio.h>

int main(int argc, char** argv)
{
	char x1;
	char y1;
	char x2;
	char y2;
	scanf_s("%c%c %c%c", &x1, 1, &y1, 1, &x2, 1, &y2, 1);

	int bukva1 = x1 - 'A' + 1;
	int cifra1 = y1 - '1' + 1;
	int bukva2 = x2 - 'A' + 1;
	int cifra2 = y2 - '1' + 1;

	int rbukv = 0;
	int rcifr = 0;

	if (bukva2 > bukva1)
	{
		rbukv = bukva2 - bukva1;
	}
	else
	{
		rbukv = bukva1 - bukva2;
	}

	if (cifra2 > cifra1)
	{
		rcifr = cifra2 - cifra1;
	}
	else
	{
		rcifr = cifra1 - cifra2;
	}

	int figura = 0;
	int vivod = 0;

	if (rbukv <= 1)
	{
		if (rcifr <= 1)
		{
			if (vivod == 1) printf("\n");
			printf("King");
			figura = 1;
			vivod = 1;
		}
	}

	if (rbukv == 0)
	{
		if (vivod == 1) printf("\n");
		printf("Rook");
		figura = 1;
		vivod = 1;
	}
	else if (rcifr == 0)
	{
		if (vivod == 1) printf("\n");
		printf("Rook");
		figura = 1;
		vivod = 1;
	}


	if (rbukv == rcifr)
	{
		if (vivod == 1) printf("\n");
		printf("Bishop");
		figura = 1;
		vivod = 1;
	}

	if (rbukv == 0)
	{
		if (vivod == 1) printf("\n");
		printf("Queen");
		figura = 1;
		vivod = 1;
	}
	else if (rcifr == 0)
	{
		if (vivod == 1) printf("\n");
		printf("Queen");
		figura = 1;
		vivod = 1;
	}
	if (rbukv == rcifr)
	{
		if (vivod == 1) printf("\n");
		printf("Queen");
		figura = 1;
		vivod = 1;
	}


	if (rbukv == 1)
	{
		if (rcifr == 2)
		{
			if (vivod == 1) printf("\n");
			printf("Knight");
			figura = 1;
			vivod = 1;
		}
	}
	if (rbukv == 2)
	{
		if (rcifr == 1)
		{
			if (vivod == 1) printf("\n");
			printf("Knight");
			figura = 1;
			vivod = 1;
		}
	}

	if (rbukv == 0)
	{
		if (cifra1 != 1)
		{
			if (cifra2 - cifra1 == 1)
			{
				if (vivod == 1) printf("\n");
				printf("Pawn");
				figura = 1;
				vivod = 1;
			}
			else if (cifra1 == 2)
			{
				if (cifra2 - cifra1 == 2)
				{
					if (vivod == 1) printf("\n");
					printf("Pawn");
					figura = 1;
					vivod = 1;
				}
			}
		}
	}

	if (figura == 0)
	{
		printf("Nobody");
	}

	return 0;
}