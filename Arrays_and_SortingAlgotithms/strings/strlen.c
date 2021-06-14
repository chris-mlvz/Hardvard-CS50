#include <stdio.h>
#include <string.h>

#define MAX 20

int main()
{
    char s[MAX];
    printf("Name: ");
    fgets(s, MAX, stdin);

    int n = 0;
    while (s[n] != '\0')
    {
        n++;
    }

    printf("The length of your name is %i\n", n - 1);

    return 0;
}