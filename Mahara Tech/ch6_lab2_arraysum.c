#include <stdio.h>
int main(){
    int nums[10];
    int sum=0;
    printf("Enter 10 intergers: \n");
    for (int i=0; i<10; ++i){
        scanf("%d", &nums[i]);
        sum += nums[i];
    }
    printf("The sum of the entered integers is: %d\n", sum);
    printf("The average of the entered integers is: %.2f\n", sum / 10.0);
}