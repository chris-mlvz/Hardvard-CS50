// Incorrect gets a string form using scanf
#include <stdio.h>

#define MAX 6

int main()
{
    char s[MAX];
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
    return 0;
}