#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head, *newNode, *tail;
int main()
{
    head = NULL;
    int ch = 1;
    while (ch)
    {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        printf("enter a number:");
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode;
            tail= newNode;
        
        
    }else{
        tail->next=newNode;
        tail =newNode;
    }newNode->next=head;

    printf("Do you need to continue or not(0|1):\n");
            scanf("%d", &ch);
}     
    
    printf("elements:\n");
    tail= head;
    while (tail->next!=head)
    {
        printf("%d", tail->data);
    tail = tail->next;
    }
    printf("\n");
    return 0;
}