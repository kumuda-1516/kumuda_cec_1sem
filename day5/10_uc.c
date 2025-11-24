#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90){
        printf("capital letter");
    }
 else{
            printf("small letter");
        }

    
    return 0;
    
    
    }