#include <stdio.h>
#include <string.h>

#define MAX 20

int is_equal_string(char[], char[]);

int main()
{
    char s[MAX];
    printf("s: ");
    fgets(s, MAX, stdin);

    char t[MAX];
    printf("t: ");
    fgets(t, MAX, stdin);

    is_equal_string(s, t);

    return 0;
}

int is_equal_string(char string1[], char string2[])
{
    int index = 0;
    while (string1[index] != '\0' || string2[index] != '\0')
    {
        if (string1[index] != string2[index])
        {
            printf("different\n");
            return 0;
        }
        else
        {
            index++;
        }
    }
    printf("same\n");
    return 1;
}