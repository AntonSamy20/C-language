#include<stdio.h>
int main() {
    int num = 10; 
    int *ptr = &num; 
    printf("Before: %d\n",num);
    *ptr = 20;
    printf("After: %d\n",num);
    return 0;
}