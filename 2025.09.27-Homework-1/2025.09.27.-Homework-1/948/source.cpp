#include <stdio.h>

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    scanf_s("%d %d", &a, &b);
    printf("%d %d", (b - 1) / a + 1, (b - 1) % a + 1);
    return 0;
}