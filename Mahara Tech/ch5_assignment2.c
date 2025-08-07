#include <stdio.h>
#include <windows.h> 

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divi(int a, int b);
int AND(int a, int b);
int OR(int a, int b);
int NOT(int a);
int XOR(int a, int b);
int remaind(int a, int b);
int incmt(int a);
int decmt(int a);

void delay() {
    Sleep(1000);
}

void displayMenu() {
    printf("Select an operation:\n");
    printf("1.  Addition\n");
    printf("2.  Subtraction\n");
    printf("3.  Multiplication\n");
    printf("4.  Division\n");
    printf("5.  AND\n");
    printf("6.  OR\n");
    printf("7.  NOT\n");
    printf("8.  XOR\n");
    printf("9.  Remainder\n");
    printf("10. Increment\n");
    printf("11. Decrement\n");
    printf("12. Exit\n");
}

int main() {
    int choice, a, b;
    while (1) {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result: %d\n", add(a, b));
                delay();
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result: %d\n", sub(a, b));
                delay();
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result: %d\n", mul(a, b));
                delay();
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                if (b != 0) printf("Result: %d\n", divi(a, b));
                else printf("Error: Division by zero\n");
                delay();
                break;
            case 5:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result: %d\n", AND(a, b));
                delay();
                break;
            case 6:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result: %d\n", OR(a, b));
                delay();
                break;
            case 7:
                printf("Enter a number: ");
                scanf("%d", &a);
                printf("Result: %d\n", NOT(a));
                delay();
                break;
            case 8:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result: %d\n", XOR(a, b));
                delay();
                break;
            case 9:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result: %d\n", remaind(a, b));
                delay();
                break;
            case 10:
                printf("Enter a number: ");
                scanf("%d", &a);
                printf("Result: %d\n", incmt(a));
                delay();
                break;
            case 11:
                printf("Enter a number: ");
                scanf("%d", &a);
                printf("Result: %d\n", decmt(a));
                delay();
                break;
            case 12:
                printf("Exiting the program.\n");
                return 0;
        }
    }
}

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divi(int a, int b) { return a / b; }
int AND(int a, int b) { return a & b; }
int OR(int a, int b) { return a | b; }
int NOT(int a) { return ~a; }
int XOR(int a, int b) { return a ^ b; }
int remaind(int a, int b) { return a % b; }
int incmt(int a) { return ++a; }
int decmt(int a) { return --a; }