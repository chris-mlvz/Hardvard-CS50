#include <stdio.h>

#define MAX 20

int main()
{
    char s[MAX];
    printf("s: ");
    fgets(s, MAX, stdin);

    char t[MAX];
    printf("t: ");
    fgets(t, MAX, stdin);

    if (s == t)
    {
        printf("same\n");
    }
    else
    {
        printf("different\n");
    }

    return 0;
}