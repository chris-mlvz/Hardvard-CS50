// Incorrect gets a string form using scanf
#include <stdio.h>

int main()
{
    char *s = NULL;
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
    return 0;
}