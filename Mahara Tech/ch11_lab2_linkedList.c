#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;
Node* head = NULL;

void display(Node *a){
    if (a==NULL){
        printf("NO data ");
    }else {
        while(a != NULL){
            printf("%d\n",a->data);
            a = a->next;
        }
    }

}
void add(){
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    int value;
    printf("Enter a value: ");
    scanf("%d",&value);
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL){
        head = newNode;
    }else {
        Node *temp = head;
        while (temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
int main(){
    printf ("The menu: \n");
    printf ("press 0: to add a node.\n");
    printf ("press 1: to display the list.\n");
    printf ("press 2: to exit.\n");
    
    while(1){
        int choice;
        printf("\nEnter yout choice: ");
        scanf("%d",&choice);
        switch (choice){
            case 0:
                add();
                break;
            case 1:
                display(head);
                break;
            case 2:
                printf("bye.");
                Sleep(1500);
                exit(0);
            default:
                printf("Invalid choice!");

        }
    }

}