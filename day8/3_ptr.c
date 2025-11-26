#include<stdio.h>
int main(){

    int a=1000;int*p=&a;
    printf("value of a=%d\n",a);
    printf("value of a using pointer:%p\n",*p);
    printf("value of a using pointer: %p\n",*(&a));
    printf("value of a pointer: %p\n",*(*(&p)));
    printf("value of a pointer:%p\n",*(&(*(&a))));

    printf("value of p pointer:%p\n",p);
    printf("value of p pointer:%p\n",&a);
    printf("value of p pointer:%p\n",*(&p));
    printf("value of p pointer:%p\n",&(*((&a))));

}