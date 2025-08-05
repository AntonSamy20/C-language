#include<stdio.h>

int main(){
    int i;
    int num,sum=0;
    double average;
    printf("Enter 10 integers:\n");
    for (i=1; i<=10; ++i){
        scanf("%d", &num);
        sum += num;
    }
    average = sum / 10.0;
    printf("Sum: %d\n", sum);
    printf("Average: %.2f", average);
    return 0;
}