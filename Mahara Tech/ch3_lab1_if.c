#include <stdio.h>

int main(){
    printf("Enter the hours: ");
    int hours;
    scanf("%d", &hours);    
    int salary = 50*hours;
    if (hours < 40) {
        salary -= salary*1/10; // Overtime pay for hours above 40
    }
    printf("salary is: %d\n", salary);

}
