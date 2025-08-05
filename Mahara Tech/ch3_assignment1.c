#include<stdio.h>
int main(){
    int a[10];
    printf("Enter 10 numbers:\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter a number to search: ");
    int search;
    scanf("%d", &search);
    if (search == a[0]){
        printf("The number is found");
    }else if (search == a[1]){
        printf("The number is found");
    }else if (search == a[2]){
        printf("The number is found");
    }else if (search == a[3]){
        printf("The number is found");
    }else if (search == a[4]){
        printf("The number is found");
    }else if (search == a[5]){
        printf("The number is found");
    }else if (search == a[6]){
        printf("The number is found");
    }else if (search == a[7]){
        printf("The number is found");
    }else if (search == a[8]){
        printf("The number is found");
    }else if (search == a[9]){
        printf("The number is found");
    }else {
        printf("The number is NOT found");
    }
}