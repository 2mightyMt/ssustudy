#include <stdio.h>

int main()
{
    int n;
    int x;
    int k[10000];
    scanf("%d", &n);
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &k[i]);
    }
    for (int j; j < n; j++)
    {
        if (k[j] < x)
        {
            printf("%d ", k[j]);
        }
    }
    return 0;
}