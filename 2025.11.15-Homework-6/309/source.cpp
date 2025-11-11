#include<stdio.h>
#include <stdbool.h>

bool Election(bool x, bool y, bool z);

int main(int argc, char** argv)
{
	int ix = 0;
	int iy = 0;
	int iz = 0;
	scanf_s("%d %d %d", &ix, &iy, &iz);
	bool x = ix;
	bool y = iy;
	bool z = iz;
	printf("%d", Election(x, y, z));
	return 0;
}

bool Election(bool x, bool y, bool z)
{
	return (x + y + z >= 2);
}