#include<stdio.h>
int main()

{
    printf(" even numbers from 1 to 10:\n ");
     for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d", i);
        }
    }
}