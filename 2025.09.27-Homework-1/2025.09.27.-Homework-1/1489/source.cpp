#include <stdio.h>

int main(int argc, char** argv)
{
    long long a = 0;
    long long b = 0;
    scanf_s("%lld %lld", &a, &b);
    printf("%lld", (a - 1) * (b - 1) + 1);
    return 0;
}