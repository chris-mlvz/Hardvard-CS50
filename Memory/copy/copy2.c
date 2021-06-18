#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 5 // 4 characters

int main()
{
    // Get a string
    // char *s = malloc(MAX * sizeof(char));
    char s[MAX];
    printf("s: ");
    fgets(s, MAX, stdin);
    if (!s)
    {
        return 1;
    }

    // Allocate memory for another string
    char *t = malloc((strlen(s) + 1) * sizeof(char));
    if (!t)
    {
        return 1;
    }

    // Copy string into memory
    strcpy(t, s);

    // Capitalize first letter in string
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    // Print strings
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    return 0;
}
