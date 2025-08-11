#include<stdio.h>
int main() {
    unsigned int num1 = 1; 
    unsigned int num2 = ~num1; 

    printf("the representsation of 1 is : %u\n",num1);
    printf("the representsation of -1 is : %u\n",num2);
    printf("Hex: 0x%X\n", num2);
    return 0;
}