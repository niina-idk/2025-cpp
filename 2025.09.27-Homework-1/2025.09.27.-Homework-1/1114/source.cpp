#include <stdio.h>

int main(int argc, char** argv)
{
    int v = 0;
    int t = 0;
    scanf_s("%d %d", &v, &t);

    int l = 109;
    int s = v * t;
    int x = (1 + s) % l;
    x = (x + l) % l;
    x = x + l * (1 - (x + l - 1) / l);
    printf("%d", x);
    return 0;
}