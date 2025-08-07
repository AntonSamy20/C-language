#include <stdio.h>
int main(){
    int nums[10];
    printf("Enter 10 intergers: \n");
    for (int i=0; i<10; ++i){
        printf("Enter num %d: ", i + 1);
        scanf("%d", &nums[i]);
    }
    printf("The Reverse: \n");
    for (int i=0; i<10; ++i){
        printf("%d \n", nums[9-i]);
    }
}