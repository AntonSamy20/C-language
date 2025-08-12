#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

struct Student {
    int id;
    int math;
    int phy;
    int english;
    int germany;
};

int main() {
    struct Student s[10];
    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        s[i].id = 1001 + i;
        s[i].math = rand() % 101;  
        s[i].phy = rand() % 101;
        s[i].english = rand() % 101;
        s[i].germany = rand() % 101;
    }
   

    int ID; 
    printf("Enter yout ID: ")
    scanf("%d",&ID);
    int flag = 0;
    for (int i = 0; i < 10; i++) {
        if (ID == s[i].id){
            flag =1;
            printf("Your grade in math is    %d\n",s[i].math);
            printf("Your grade in physics is %d\n",s[i].phy);
            printf("Your grade in english is %d\n",s[i].english);
            printf("Your grade in germany is %d\n",s[i].germany);
        }
    }
    if (!flag) printf("Your ID is not correct!");
    return 0;
}
