#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node *prev; 
    struct Node *next;
};

struct Node *head = NULL;
struct Node *tail = NULL;

int main() {
    int ch = 1;

    while (ch) {
         struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        if (newNode == NULL) {
            printf("Memory allocation failed!\n");
            return 1; 
        }

        printf("Enter a number: ");
        scanf("%d", &newNode->data);

     
        newNode->prev = NULL;
        newNode->next = NULL;

        if (head == NULL) {
            
            head = newNode;
            tail = newNode;
            head->next = head; 
            head->prev = head; 
        } else {
            
            tail->next = newNode;
            newNode->prev = tail;
            newNode->next = head; 
            head->prev = newNode; 
            tail = newNode; 
                }

        printf("Do you need to continue or not (0|1): \n");
        scanf("%d", &ch);
    }

    
    printf("Elements:\n");
    if (head == NULL) {
        printf("List is empty.\n");
    } else {
        struct Node *current = head;
        do {
            printf("%d ", current->data);
            current = current->next;
        } while (current != head); 
        printf("\n");
    }

    
    if (head != NULL) {
        struct Node *current = head->next;
        while (current != head) {
            struct Node *temp = current;
            current = current->next;
            free(temp);
        }
        free(head); 
    }

    return 0;
}