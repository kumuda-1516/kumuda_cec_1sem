#include<stdio.h>
#include<string.h>

struct hotel{
char name[20];
int bill_num;
int price;
}food1,
food2;
int main(){


    strcpy(food1.name,"pasta");
    
    food1.price=325;
    food1.bill_num=25;

printf("food details:\n");
printf("name:%s\n",food1.name);
printf("bill.no: %d\n",food1.bill_num);
printf("price: %d\n",food1.price);

strcpy(food1.name,"pizza");
    
    food2.price=300;
    food2.bill_num=27;

printf("food details:\n");
printf("name:%s\n",food2.name);
printf("bill.no: %d\n",food2.bill_num);
printf("price: %d\n",food2.price);
}