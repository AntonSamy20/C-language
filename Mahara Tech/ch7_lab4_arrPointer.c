#include<stdio.h>
int sum_arr(int *arr, int size);
int main() {
    int nums[5]= {1, 2, 3, 4, 5};
    printf("Sum of array: %d\n", sum_arr(nums,5));
}
int sum_arr(int *arr, int size){
    int sum = 0;
    for (int i = 0; i <size ; i++) 
    {
        sum += *(arr + i);
    }
    return sum;
}