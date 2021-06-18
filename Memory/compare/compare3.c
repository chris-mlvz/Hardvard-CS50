#include <stdio.h>
#include <string.h>

#define MAX 20

int compare_strings(char *a, char *b);

int main()
{
    char s[MAX];
    printf("s: ");
    fgets(s, MAX, stdin);

    char t[MAX];
    printf("t: ");
    fgets(t, MAX, stdin);

    if (compare_strings(s, t))
    {
        printf("same\n");
    }
    else
    {
        printf("different\n");
    }

    return 0;
}

int compare_strings(char *a, char *b)
{
    if (strlen(a) != strlen(b))
    {
        return 0;
    }
    for (int i = 0, n = strlen(a); i < n; i++)
    {
        if (*(a + 1) != *(b + 1))
        {
            return 0;
        }
    }
    return 1;
}