#include<stdio.h>
int max (int a, int b);
int main() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("The maximum number is: %d\n", max(a, b));
    return 0;
}
int max(int a, int b) {
    if (a>b){
        return a;
    }
    return b;
}

