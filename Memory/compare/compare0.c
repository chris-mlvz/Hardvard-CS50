#include <stdio.h>

int main()
{
    int i;
    printf("i: ");
    scanf("%i", &i);
    int j;
    printf("j: ");
    scanf("%i", &j);

    if (i == j)
    {
        printf("same\n");
    }
    else
    {
        printf("different\n");
    }

    return 0;
}