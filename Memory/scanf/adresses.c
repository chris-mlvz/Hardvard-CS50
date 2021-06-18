#include <stdio.h>

#define MAX 16

int main()
{
    char s[MAX];
    printf("s: ");
    fgets(s, MAX, stdin);

    char t[MAX];
    printf("t: ");
    fgets(t, MAX, stdin);

    printf("s: %p\n", s);
    printf("t: %p\n", t);

    return 0;
}