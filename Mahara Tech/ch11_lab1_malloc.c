#include <stdio.h>
#include <stdlib.h>
int main (){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int *arr = (int*)malloc(n * sizeof(int));
    printf("Creating malloc memory\n");
    for (int i=0; i<n; i++){
        printf("the value of index %d: %d\n",i, arr[i]);
    }


    for (int i=0; i<n; i++){
        printf("Enter the value of index %d: ",i);
        scanf("%d",&arr[i]);
    }
    int temp;
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if (arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
        }
    } 

    printf("After bubblue sorting\n");
    for (int i=0; i<n; i++){
        printf("the value of index %d: %d\n",i, arr[i]);
    }

    free(arr);
}