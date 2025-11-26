#include <stdio.h>

int main() {
    int a = 10;     
    int *ptr;         

    ptr = &a;      

    printf("Before changing: a = %d\n", a);

    *ptr=25;       

    printf("After changing using pointer: a = %d\n", a);
    (*ptr)++;
    printf("After changing using pointer: a = %d\n", a);

}