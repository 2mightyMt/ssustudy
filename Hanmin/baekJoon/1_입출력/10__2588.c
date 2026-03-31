#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int c = b % 10;
    printf("%d\n", a * c);
    int d = ((b % 100) - c) / 10;
    printf("%d\n", a * d);
    int e = (b - (10 * d) - c) / 100;
    printf("%d\n", a * e);
    printf("%d\n", a * b);
    return 0;
}