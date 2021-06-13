#include <stdio.h>

int main()
{
    // Prompt user for x
    int x;
    printf("x: ");
    scanf("%i", &x);

    // Prompt user for y
    int y;
    printf("y: ");
    scanf("%i", &y);

    // Perform arithmetic
    printf("x + y = %i\n", x + y);
    printf("x - y = %i\n", x - y);
    printf("x * y = %i\n", x * y);
    printf("x / y = %i\n", x / y);
    printf("x mod y = %i\n", x % y);

    return 0;
}
