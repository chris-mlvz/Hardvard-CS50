#include <stdio.h>

int main()
{
    // Prompt user for x
    float x;
    printf("x: ");
    scanf("%f", &x);

    // Prompt user for y
    float y;
    printf("y: ");
    scanf("%f", &y);

    // Perform arithmetic
    printf("x + y = %f\n", x + y);
    printf("x - y = %f\n", x - y);
    printf("x * y = %f\n", x * y);
    printf("x / y = %.50f\n", x / y);
    // printf("x mod y = %f\n", x % y);

    return 0;
}
