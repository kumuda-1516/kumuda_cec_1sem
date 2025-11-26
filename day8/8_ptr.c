#include <stdio.h>

int main() {
    int a=20;
    int b=30; 
    

    printf("before swapping:\n ");
    printf("a : %d\n", a);
    printf("b : %d\n", b);



    
    int temp = a;
    a = b;
   b = temp;

    printf("After swapping:\n");
    printf("a : %d\n", a);
    printf("b : %d\n", b);

    
}