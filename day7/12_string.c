#include<stdio.h>
#include<string.h>
int main(){
    char user_input[100];
    printf("enter a string:");
    fgets(user_input,100,stdin);
    printf("enterd string is:%s",user_input);
}