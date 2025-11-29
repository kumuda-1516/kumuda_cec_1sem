#include <stdio.h>
#include <stdlib.h>

#define MAX 50

struct student {
    int roll;
    char name[30];
    float marks;
};

struct student stack[MAX];
int top = -1;


void push() {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot add more students.\n");
        return;
    }

    top++;
    printf("Enter Roll No: ");
    scanf("%d", &stack[top].roll);

    printf("Enter Name: ");
    scanf("%s", stack[top].name);

    printf("Enter Marks: ");
    scanf("%f", &stack[top].marks);

    printf("Student added successfully!\n");
}


void pop() {
    if (top == -1) {
        printf("Stack Underflow! No student to delete.\n");
        return;
    }

    printf("Deleted Student:\n");
    printf("Roll No: %d\n", stack[top].roll);
    printf("Name: %s\n", stack[top].name);
    printf("Marks: %.2f\n", stack[top].marks);

    top--;
}


void peek() {
    if (top == -1) {
        printf("Stack is empty.\n");
        return;
    }

    printf("Top Student Details:\n");
    printf("Roll No: %d\n", stack[top].roll);
    printf("Name: %s\n", stack[top].name);
    printf("Marks: %.2f\n", stack[top].marks);
}


void display() {
    if (top == -1) {
        printf("No student records available.\n");
        return;
    }

    printf("\nStudent Records (Top to Bottom):\n");
    for (int i = top; i >= 0; i--) {
        printf("\nRoll No: %d", stack[i].roll);
        printf("\nName: %s", stack[i].name);
        printf("\nMarks: %.2f\n", stack[i].marks);
    }
}


int main() {
    int choice;

    while (1) {
        printf("\n--- Student Management System Using Stack ---\n");
        printf("1. Add Student (Push)\n");
        printf("2. Remove Student (Pop)\n");
        printf("3. View Top Student (Peek)\n");
        printf("4. Display All Students\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}