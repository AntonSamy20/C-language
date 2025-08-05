#include<stdio.h>

int main(){
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);
    if (n&1){
        printf("The number is odd\n");
    } else {
        printf("The number is even\n");
        
    }
    return 0;
}