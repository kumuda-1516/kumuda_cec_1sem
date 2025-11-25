#include<stdio.h>
int main()
{
      int max=0,arr[5];
      printf("enter a number:");
      for ( int i=0; i<=5-1 ; i++){
        scanf("%d",&arr[i]);

        }
        max =arr[0];
        for(int i=0; i<=5-1;i++)
        { if(arr[i]>max){
            max=arr[i];
        }

        }
    


    printf("max: %d",max);


}