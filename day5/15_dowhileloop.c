#include <stdio.h>
int main()
{
    int n;
    printf("numbers from 1 to 100:");
    scanf("%d", &n);
    int i = 1;
    do
    {

        printf("%d\n", i);
        i++;
    } while (i <= n);
}
