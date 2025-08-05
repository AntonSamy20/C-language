#include<stdio.h>

int main(){
    int num1;
    int num2;
    printf("Enter the first operand: ");
    scanf("%d",&num1);
    printf("Enter the second operand: ");
    scanf("%d",&num2);

    int sum = num1 + num2;
    int multi = num1 *num2;
    int sub = num1 - num2;
    int mod = num1 % num2;
    char c[];
    if (num2==0){
        c[] = "Error";
    }else{
        c=  num1 / num2;
      
    }

    
    printf("the sum = %d\n",sum);
    printf("the sub = %d\n",sub);
    printf("the multi = %d\n",multi);
    printf("the div = %s\n",c);
    printf("the mod = %d\n",mod);

    return 0;
}