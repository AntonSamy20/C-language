#include <stdio.h>
int main(){
    int nums[10];
    int x;
    int c=0;
    printf("Enter 10 intergers: \n");
    for (int i=0; i<10; ++i){
        scanf("%d", &nums[i]);
    }

    printf("Enter a value to search: ");
    scanf("%d", &x);

    for (int i=0; i<10; ++i){
        if (nums[i]==x){
            c++;
        }
        
    }

    if (c) printf("The value appears %d times",c);
    else printf("THE VALUE %d NOT EXIST",c);
    
}