#include <stdio.h>

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    scanf_s("%d %d", &a, &b);
    if ((a % b == 0) || (b % a == 0))
    {
        printf("%d", 1);
    }
    else
    {
        printf("%d", 666);
    }
    return 0;
}