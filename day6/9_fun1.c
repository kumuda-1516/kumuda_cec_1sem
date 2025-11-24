#include<stdio.h>
int sub( int num1,int num2);
int main()
{
    
int res1=sub(5,5);
int res2=sub(55,5);
int res3=sub(40,5);
    
printf("res1:%d\n",res1);
printf("res2:%d\n",res2);
printf("res3:%d\n",res3);
}
int sub(int num1,int num2){
    return num1-num2;
}