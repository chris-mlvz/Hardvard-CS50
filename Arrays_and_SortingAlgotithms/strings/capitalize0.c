#include <stdio.h>
#include <string.h>

#define MAX 20

int main()
{
    char s[MAX];
    printf("Before: ");
    fgets(s, MAX, stdin);

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - ('a' - 'A'));
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");

    return 0;
}