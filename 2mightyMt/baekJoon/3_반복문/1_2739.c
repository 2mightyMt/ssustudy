// [BOJ] 2739 , 구구단 
// 22:57 시작 ~ 23:14 종료 17분소요

#include <stdio.h>


// 방법1 for문
// int main() {
//         int n;
//             scanf("%d", &n);
//         //구구단 n단 출력시켜야함...
//         //예제 출력 조건이 2단 1~9까지
//              for(int i = 1; i < 10; i++ ){
//                 printf("%d * %d = %d\n", n, i, n*i);                 
//              }
//                 return 0;
    
// }
// 방법 2 while문
    int main(){
        int n;
        scanf("%d", &n);

        int i = 1;
        while( i <= 9){
            printf("%d * %d = %d\n",n,i,n*i);    
            i++;
        }
        
        return 0;    
    }