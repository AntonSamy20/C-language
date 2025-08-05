#include<stdio.h>

int main(){
    int num1;
    int num2;
    printf("Enter the first operand: ");
    scanf("%d",&num1);
    printf("Enter the second operand: ");
    scanf("%d",&num2);
    printf("\nThe butwise: \n");
    printf("AND operator %d & %d = %d \n",num1,num2,num1 & num2);
    printf("OR operator %d | %d = %d \n",num1,num2,num1 | num2);
    printf("NOT operator of %d = %d \n",num1,~ num1);
    printf("NOT operator of %d = %d \n",num2,~ num2);
    printf("XOR operator %d ^ %d = %d \n",num1,num2,num1 ^ num2);
    printf("Right Shift operator %d >> %d = %d \n",num1,num2,num1 >> num2);
    printf("Left Shift operator %d << %d = %d \n",num1,num2,num1 << num2);
}