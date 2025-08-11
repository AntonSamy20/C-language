#include<stdio.h>
int scalar(int *arr,int *arr2, int size);
int main() {
    int nums[5]= {1, 2, 3};
    int nums2[5]= {1 ,1, 1};
    printf("Scalar product: %d\n", scalar(nums, nums2 , 3));
}
int scalar(int *arr,int *arr2 , int size){
    int ans = 0;
    for (int i = 0; i <size ; i++) 
    {
        ans += *(arr + i) * (*(arr2 + i));
    }
    return ans;
}