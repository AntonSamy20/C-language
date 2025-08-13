#include<stdio.h>
#define PI 3.1415

int main(){
    int rad; 
    printf("Enter a radius: ");
    scanf("%d",&rad);
    float area = PI * rad * rad;
    printf("the area of circle: %f\n",area);
}