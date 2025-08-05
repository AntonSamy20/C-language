#include<stdio.h>
#include<stdlib.h>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"


int main(){
    printf("Enter the answer of 3 x 4:\n");
    int answer;
    printf("Please enter your answer: ");
    scanf("%d", &answer);
    while (answer != 12){
        printf(RED"Incorrect! Please try again.\n"RESET);
        printf("Please enter your answer: ");
        scanf("%d", &answer);
    }
    printf(GREEN"Exellent"RESET);
}