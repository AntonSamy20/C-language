#include<stdio.h>
#include<stdlib.h>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"


int main(){
    int fact=1;
    int num, original;

    printf("Enter an integer number: ");
    scanf("%d",&num);
    original = num;
    while (num != 1){
        fact *= num;
        --num;
    }
    printf("The factorial of %d is %d", original, fact);
}
    