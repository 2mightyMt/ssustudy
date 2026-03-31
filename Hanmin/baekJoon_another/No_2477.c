#include <stdio.h>

struct cham
{
    int d;
    int l;
};

int main(){
    int n;
    struct cham c[13];
    int k=0;
    scanf("%d", &n);
    for(int i = 0; i < 6; i++){
        scanf("%d %d", &c[i].d, &c[i].l);
    }
    for(int i=0; i <6; i++){
        c[i+6].d = c[i].d;
        c[i+6].l = c[i].l;
    }
    while(c[k].d != c[k+2].d || c[k+1].d != c[k+3].d)
    {
        k++;
    }
    
    printf("%d", c[k+4].l * c[k+5].l * n - c[k+1].l * c[k+2].l * n);

}