#include<stdio.h>
int main(){
    int arr[50],size=0;
    printf("enter a size of array:\n");
    scanf("%d",&size);
    if (size>50){

printf("array out of bound\n");
    }else{
        printf("enter element:\n");
        for(int i=0;i<size;i++){
            scanf("%d",&arr[i]);
        }
        for( int i=0;i<size-1;i++){
            for(int j=0;j<=size-1;j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    }printf("array elements:\n");
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
}
