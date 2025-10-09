#include <stdio.h>

int main(int argc, char** argv)
{
    long long a = 0;
    scanf_s("%lld", &a);
    printf("%lld", a * a);
    return 0;
}