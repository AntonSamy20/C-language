#include<stdio.h>
#include<stdlib.h>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"


int main(){
    int i=0;
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Multiplication table of %d:\n",num);
    while (i<=12){
        printf("%d x %d = ", num, i);
        printf(GREEN"%d\n"RESET, i * num);
        i++;
    }
}