#include <stdio.h>
#include <string.h>
int main()
{
    char first_name[] = "kavuuu";
    char last_name[] = "keethuu";
    char another_name[] = " kavuu kappi";
    printf("length of first_name:%d\n", strlen(first_name));
    printf("full name:%s\n", strcat(first_name, last_name));
    printf("%d\n", strcmp(first_name, another_name));
    if (strcmp(first_name, another_name) == 0)
    {
        printf("both strings are equal\n");
    }
    else
    {
        printf("both the strings are not equal\n");
    }
}