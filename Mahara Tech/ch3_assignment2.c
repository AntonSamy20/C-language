#include <stdio.h>
#include <string.h>  

int main() {
    int ID;
    printf("Enter your ID: ");
    scanf("%d", &ID);

    char name[20];
    int found = 1;

    switch(ID) {
        case 101:
            strcpy(name, "Anton");
            break;
        case 102:
            strcpy(name, "Ahmed");
            break;
        case 103:
            strcpy(name, "Mina");
            break;
        default:
            printf("Incorrect ID\n");
            found = 0;
            break;
    }

    if (found) {
        int password;
        printf("Enter your password: ");
        scanf("%d", &password);

        switch(password) {
            case 1234:
            case 5678:
            case 91011:
                printf("Welcome, %s!\n", name);
                break;
            default:
                printf("Incorrect password.\n");
                break;
        }
    }

    return 0;
}
