#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 20

int main()
{
    char s[MAX];
    printf("Before: ");
    fgets(s, MAX, stdin);

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (islower(s[i]))
        {
            printf("%c", toupper(s[i]));
        }
    }
    printf("\n");

    return 0;
}
