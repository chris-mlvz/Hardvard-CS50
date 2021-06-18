#include <stdio.h>
#include <string.h>

#define MAX 20

int compare_strings(char a[], char b[]);

int main()
{
    char s[MAX];
    printf("s: ");
    fgets(s, MAX, stdin);
    if (!s)
    {
        return 1;
    }
    char t[MAX];
    printf("t: ");
    fgets(t, MAX, stdin);
    if (!t)
    {
        return 1;
    }

    if (strcmp(s, t) == 0)
    {
        printf("same\n");
    }
    else
    {
        printf("different\n");
    }

    return 0;
}
