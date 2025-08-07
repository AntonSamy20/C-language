#include<stdio.h>
int a,b;
void swap (void);
int main() {
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    
    printf("Before: \n");
    printf("The first number: %d\n",a);
    printf("The second number: %d\n",b);
    swap();
    printf("After: \n");
    printf("The first number: %d\n",a);
    printf("The second number: %d\n",b);
    return 0;
}
void swap (void) {
    int temp = a;
    a = b;
    b = temp;
}
