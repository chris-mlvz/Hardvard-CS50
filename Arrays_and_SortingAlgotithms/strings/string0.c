#include <stdio.h>
#include <string.h>

#define SIZE 20

int main()
{
    char s[SIZE];
    printf("Input: ");
    fgets(s, SIZE, stdin);

    printf("Output:\n");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c\n", s[i]);
    }

    return 0;
}