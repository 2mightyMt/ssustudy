#include <stdio.h>

int main()
{
    int h, m, t;
    scanf("%d %d", &h, &m);
    scanf("%d", &t);
    int p1 = h * 60 + m;
    int p2 = p1 + t;
    if (p2 < 1440)
    {
        printf("%d %d", p2 / 60, p2 % 60);
    }
    else if (p2 > 1440)
    {
        p2 -= 1440;
        printf("%d %d", p2 / 60, p2 % 60);
    }
    else
    {
        printf("0 0");
    }
    return 0;
}