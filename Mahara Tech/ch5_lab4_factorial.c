#include<stdio.h>
long long factorial (long long a);
int main() {
    long long num; 
    printf("Enter a positive integer: ");
    scanf("%lld", &num);
    if (num<0) printf("Invalid number");
    else {
        printf("The factorial of %lld is %lld",num, factorial(num));
    }
}
long long factorial (long long a){
    if (a == 0 || a == 1){
        return 1;
    }
    return a * factorial(a-1);
}