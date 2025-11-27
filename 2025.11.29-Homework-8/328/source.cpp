#include<stdio.h>

struct Student 
{
	char f[50];
	char i[50];
	int maeth;
	int psych;
	int inf;
};
int main(int argc, char** argv)
{
	int n = 0;
	scanf_s("%d", &n);

	struct Student qt[100];
	double msum = 0, psum = 0, isum = 0;

	for (int i = 0; i < n; i++)
	{
		scanf_s("%s %s %d %d %d", qt[i].f, (unsigned)sizeof(qt[i].f), qt[i].i, (unsigned)sizeof(qt[i].i), &qt[i].maeth, &qt[i].psych, &qt[i].inf);

		msum += qt[i].maeth;
		psum += qt[i].psych;
		isum += qt[i].inf;
	}

	double msr = msum / n;
	double psr = psum / n;
	double isr = isum / n;
	printf("%g %g %g", msr, psr, isr);
	return 0;
}