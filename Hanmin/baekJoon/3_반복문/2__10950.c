#include <stdio.h>

int main()
{
    int a;
    int q, p;
    scanf("%d", &a);
    for (int b = 1; b <= a; b++)
    {
        scanf("%d %d", &q, &p);
        printf("%d\n", q + p);
    }
    return 0;
}