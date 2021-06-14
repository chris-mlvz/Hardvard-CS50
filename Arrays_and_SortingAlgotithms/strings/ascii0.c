#include <stdio.h>
#include <string.h>

#define MAX 20

int main()
{
    char s[MAX];
    printf("String: ");
    fgets(s, MAX, stdin);

    for (int i = 0, n = strlen(s); i < n - 1; i++)
    {
        // int c = (int)s[i];
        printf("%c %i\n", s[i], s[i]);
    }

    return 0;
}