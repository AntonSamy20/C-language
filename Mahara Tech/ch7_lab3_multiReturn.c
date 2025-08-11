#include<stdio.h>
void math(int a, int b, int *sum, int *sub);
int main() {
    int sum,sub;
    int num1,num2;
    printf("Enter a number: ");
    scanf("%d", &num1);
    printf("Enter another number: ");
    scanf("%d", &num2);
    math(num1, num2, &sum, &sub);
    printf("Sum: %d\n", sum );
    printf("sub: %d\n", sub);
}
void math(int a, int b, int *sum, int *sub)
{
    *sum = a + b;
    *sub = a - b;
}