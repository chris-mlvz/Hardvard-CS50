#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 16

int main()
{
    // Get a string
    char s[MAX];
    printf("s: ");
    fgets(s, MAX, stdin);
    if (s == NULL)
    {
        return 1;
    }

    // Copy string's address
    char *t = s;

    // Capitalize first letter in string
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    // Print string twice
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    return 0;
}
