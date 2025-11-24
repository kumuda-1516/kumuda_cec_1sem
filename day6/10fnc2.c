#include<stdio.h>
void mul( int a,int b);
int main()
{
    mul(10,15);mul(15,12);

}
void mul( int a,int b)
{
    printf("multiplication is: %d\n",a*b);
}
