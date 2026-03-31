#include <stdio.h>

int main()
{
    int x, sum = 0, a, c, d;

    scanf("%d\n", &x);
    scanf("%d\n", &a);

    for (int b = 0; b < a; b++)
    {
        scanf("%d %d", &d, &c);
        sum += d * c;
    }
    if (sum == x)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}