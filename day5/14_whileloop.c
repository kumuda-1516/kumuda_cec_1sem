#include<stdio.h>
int main()
{
    int n;
    printf("numbers from 1 to 100:");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
}
