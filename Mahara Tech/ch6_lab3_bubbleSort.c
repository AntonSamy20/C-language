#include <stdio.h>
int main(){
    int nums[10];
    printf("Enter 10 intergers: \n");
    for (int i=0; i<10; ++i){
        scanf("%d", &nums[i]);
    }

    for (int i=0; i<9; ++i){
        for (int j=0; j<9-i; ++j){
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    printf("After bubble sorting: ");
    for (int i=0; i<10; ++i){
        printf("%d \n", nums[i]);
    }
    
}