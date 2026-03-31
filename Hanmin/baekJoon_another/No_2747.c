#include <stdio.h>

int main(){
    int n;
    int c[45] = {0,1,1,};
    scanf("%d", &n);
    for(int i = 0; i <= n; i++){
        c[i+2] = c[i+1] + c[i]; 
    }
    printf("%d", c[n]);

}

