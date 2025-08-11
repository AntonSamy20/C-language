#include<stdio.h>

int add (int a, int b);
int sub(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int mod(int a, int b);

int main(){
    int (*operation[5])(int,int) = {add,sub, multiply,divide, mod};
    int a, b, choice;
    printf("Choose operation:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Modulus\n");
    scanf("%d", &choice);
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);
    
    int result = operation[choice-1](a,b);
    printf("Result: %d\n", result);
    return 0;
}

int add (int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) {
    if (b == 0) {
        printf("Division by zero error!\n");
        return -1;
    }
    return a / b;
}
int mod(int a, int b) {
    if (b == 0) {
        printf("Division by zero error!\n");
        return  -1;
    }
    return a % b;
}
