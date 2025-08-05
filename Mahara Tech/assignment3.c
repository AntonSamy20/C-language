#include<stdio.h>

int main(){
    int num1;
    int num2;
    printf("Enter the first operand: ");
    scanf("%d",&num1);
    printf("Enter the second operand: ");
    scanf("%d",&num2);

    int sum = num1 + num2;
    int sub = num1 - num2;
    int anding = num1 & num2;
    int oring = num1 | num2;
    int xoring = num1 ^ num2;

    printf("the sum: %d + %d = %d\n",num1, num2,sum);
    printf("the sub: %d - %d = %d\n",num1, num2,sub);
    printf("the AND: %d & %d = %d\n",num1, num2,anding);
    printf("the OR: %d | %d = %d\n",num1, num2,oring);
    printf("the XOR: %d ^ %d = %d\n",num1, num2,xoring);
   

}