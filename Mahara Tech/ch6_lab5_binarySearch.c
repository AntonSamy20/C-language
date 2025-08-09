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
    int low=0,high=sizeof(nums)/sizeof(nums[0])-1;
    int med ;
    int x;
    printf("Enter a value to search: ");
    scanf("%d", &x);

    while (low >= high){
        med = (low+high)/2;
        if (x == nums[med]){
            printf("The value %d exists in the array.\n", x);
            return 0;
        }else if (x > nums[med]){
            low = med+1;
        }else {
            high = med-1;
        }
    } 
    printf("The value %d does not exist in the array.\n", x);   
}