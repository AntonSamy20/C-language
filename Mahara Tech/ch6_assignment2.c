#include<stdio.h>
#include<stdlib.h>

void randomize(int arr[], int size);
void pass(int arr[], int size);
void fail(int arr[], int size);
int min_arr(int arr[], int size);
int max_arr(int arr[], int size);


int main() {
    int c1[10];
    int c2[10];
    int c3[10];
    printf("Statistics on classes grades: \n");
    randomize(c1, 10);
    randomize(c2, 10);
    randomize(c3, 10);
    printf("\nClass 1 grades: \n");
    pass(c1, 10);
    fail(c1, 10);
    printf("The maximum value is: %d\n", max_arr(c1, 10));
    printf("The minimum value is: %d\n", min_arr(c1, 10));

    printf("\nClass 2 grades: \n");
    pass(c2, 10);
    fail(c2, 10);
    printf("The maximum value is: %d\n", max_arr(c2, 10));
    printf("The minimum value is: %d\n", min_arr(c2, 10));

    printf("\nClass 3 grades: \n");
    pass(c3, 10);
    fail(c3, 10);
    printf("The maximum value is: %d\n", max_arr(c3, 10));
    printf("The minimum value is: %d\n", min_arr(c3, 10));
}

void pass(int arr[], int size){
    int pass_count = 0;
    for (int i=0; i<size; ++i){
        if (arr[i] >= 50) {
            pass_count++;
        }
    }
    printf("Number of students who passed: %d\n", pass_count);
}
void fail(int arr[], int size){
    int fail_count = 0;
    for (int i=0; i<size; ++i){
        if (arr[i] < 50) {
            fail_count++;
        }       
    }
    printf("Number of students who failed: %d\n", fail_count);
}   

void randomize(int arr[], int size){
    for (int i=0; i<size; ++i){
        arr[i] = rand()%100 +1;
    }
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
