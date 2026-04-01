//오후6:19~오후6:20 /1분소요
#include <stdio.h>

int main() {
    int t, a, b;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
    }
    return 0;
}