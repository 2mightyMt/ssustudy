#include <stdio.h>

// 1번째 방법
int main()
{
    int a;
    scanf("%d", &a);
    for (int b = 1; b < 10; b++)
    {
        printf("%d * %d = %d\n", a, b, a * b);
    }

    return 0;
}

// 2번째 방법
int main()
{
    int a;
    scanf("%d", &a);
    int b = 1;
    while (b <= 9)
    {
        printf("%d * %d = %d\n", a, b, a * b);
        b++;
    }
    return 0;
}