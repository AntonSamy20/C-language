#include<stdio.h>
int main(){
    int id; 
    printf("Enter your ID: ");
    scanf("%d", &id);
    switch(id){
        case 101:
            printf("Welcome, Anton!\n");
            break;
        case 102:
            printf("Welcome, Ahmed!\n");
            break;
        case 103:
            printf("Welcome, Mina!\n");
            break;  
        default:
            printf("ID not recognized.\n");
            break;
    }
}