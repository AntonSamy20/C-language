#include<stdio.h>
#include<limits.h>

int min_arr(int arr[],int size);
int max_arr(int arr[],int size);

int main() {
    int nums[10];
    printf("Enter 10 intergers: \n");
    for (int i=0; i<10; ++i){
        scanf("%d", &nums[i]);
    }
    printf("The minimum value is: %d\n", min_arr(nums, 10));
    printf("The maximum value is: %d\n", max_arr(nums, 10));
}


int min_arr(int arr[],int size){
    int min= arr[0];
    for (int i=1; i<size; ++i){
        if (arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
int max_arr(int arr[],int size){
    int max= arr[0];
    for (int i=1; i<size; ++i){
        if (arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
