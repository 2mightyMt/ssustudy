#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int z = x * 60;
    int sum = z + y;
    int ans = sum - 45;

    if (x == 0 && y < 45)
    {
        printf("23 %d", 60 - 45 + y);
    }
    else
    {
        printf("%d %d", ans / 60, ans % 60);
    }
    return 0;
}