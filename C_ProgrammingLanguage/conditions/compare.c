#include <stdio.h>

int main()
{
    // Prompt user for x
    int x;
    printf("x: ");
    scanf("%i", &x);
    // Promp user fot y
    int y;
    printf("y: ");
    scanf("%i", &y);

    // Compare x and y
    if (x < y)
    {
        printf("x is less than\n");
    }
    else if (x > y)
    {
        printf("x is greather than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
    return 0;
}