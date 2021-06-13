#include <stdio.h>

#define SIZE 15

int main()
{
    char name[SIZE];
    printf("What is your name?\n");
    fgets(name, SIZE, stdin);

    printf("hello, %s\n", name);
    return 0;
}
