#include <stdio.h>

int main(int argc, char** argv)
{
    long long a = 0;
    long long b = 0;
    scanf_s("%lld %lld", &a, &b);
    long long trash = b % a;
    long long pussies = (a - trash) * (trash > 0);
    printf("%lld %lld %lld", b / a, trash, pussies);
    return 0;
}