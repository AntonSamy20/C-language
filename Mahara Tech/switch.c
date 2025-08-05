#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    switch(n){
        case 1:
        case 2:
            printf("The number is 1 or 2\n");
            break;
        case 3:
            printf("The number is 3\n");
            break;
        default:
            printf("The number is not between 1 and 3\n");
            break;
    }
   
        return 0;
}