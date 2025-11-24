#include<stdio.h>
int getnumber(void)
{ return 42;
}
int main()
{
    int a = getnumber();
    printf("%d\n",a);
    return 0;
}