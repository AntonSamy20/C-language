#include <stdio.h>

void main (void) {
    char name[100];
    int year;
    int graduationYear;

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your year of birth: ");
    scanf("%d",&year);
    printf("Enter graduation year: ");
    scanf("%d",&graduationYear);

    printf("my name is %s,\n i born at %d,\n i will graduate at %d",name,year,graduationYear);
}