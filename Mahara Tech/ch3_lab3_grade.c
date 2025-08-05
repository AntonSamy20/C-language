#include <stdio.h>

int main() {
    printf("Enter your grade: ");
    int grade;
    scanf("%d", &grade);

    if (grade >= 85){
        printf("Excellent\n");
    }else if (grade >= 75) {
        printf("Very Good\n");
    }else if (grade >= 65) {
        printf("Good\n");
    }else if (grade >= 50) {
        printf("Normal\n");
    }else {
        printf("Failed\n");
    }
}