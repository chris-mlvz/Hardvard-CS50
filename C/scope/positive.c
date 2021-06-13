#include <stdio.h>

int get_positive_int(char prompt[]);

int main()
{
    int i = get_positive_int("Positive number: \n");
    printf("%i\n", i);
    return 0;
}

// Prompt user for positive integer
int get_positive_int(char prompt[])
{
    int n;
    do
    {
        printf("%s", prompt);
        scanf("%i", &n);
    } while (n < 1);
    return n;
}