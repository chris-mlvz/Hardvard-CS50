#include <stdio.h>

#define MAX 20

int main()
{
    char name[MAX];
    printf("Name: ");
    fgets(name, MAX, stdin);

    printf("hello, %s\n", name);
    return 0;
}