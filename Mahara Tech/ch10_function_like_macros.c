#include<stdio.h>
#define ADD(a,b)(a+b)
#define MIN(a,b)((a>b)?b:a)

int main(){
    int ans = ADD(3,7);
    int min = MIN(3,7);
    printf("%d\n",ans);
    printf("%d",min);
}