#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int k[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &k[i]);
    }
    int v, sum = 0;
    scanf("%d", &v);
    for (int j = 0; j < n; j++)
    {
        if (k[j] == v)
        {
            sum++;
        }
    }
    printf("%d", sum);
    return 0;
}