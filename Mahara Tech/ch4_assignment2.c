#include<stdio.h>
int main(){
    int attempts = 0;
    int ID,password;
    printf("Enter your ID: ");
    scanf("%d", &ID);
    
    while (attempts < 3) {
        if (ID == 1234){
            printf("Enter your password: ");
            scanf("%d", &password);
            if (password == 5678) {
                printf("Welcome, Mr.Anton\n");
                break;
            }else {
                attempts++;
                printf("Incorrect password. You have %d attemps left.\n",3-attempts);
                if (attempts == 3) {
                    printf("No more tries \n");
                    break;
                }
            }
        }else {
            printf("Your ID is incorrect. Please try again.\n");
            break;
        }
    }
    
}

