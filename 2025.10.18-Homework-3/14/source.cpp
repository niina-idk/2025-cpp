#include<stdio.h>

int main(int argc, char** argv)
{
	int of_my_flesh = 0;
	int it_disguisted_me = 0;
	scanf_s("%d %d", &of_my_flesh, &it_disguisted_me);

	int i_craved = of_my_flesh;
	int for_strength = it_disguisted_me;

	while (it_disguisted_me != 0)
	{
		int and_ceirtanty_of_steel = it_disguisted_me;
		it_disguisted_me = of_my_flesh % it_disguisted_me;
		of_my_flesh = and_ceirtanty_of_steel;
	}

	long long i_aspired = i_craved * for_strength;
	long long to_the_purity = i_aspired / of_my_flesh;

	printf("%lld", to_the_purity);
	return 0;
}