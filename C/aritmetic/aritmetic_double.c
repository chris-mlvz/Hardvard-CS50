#include <stdio.h>

int main()
{
    // Prompt user for x
    double x;
    printf("x: ");
    scanf("%lf", &x);

    // Prompt user for y
    double y;
    printf("y: ");
    scanf("%lf", &y);

    // Perform arithmetic
    printf("x + y = %lf\n", x + y);
    printf("x - y = %lf\n", x - y);
    printf("x * y = %lf\n", x * y);
    printf("x / y = %.50lf\n", x / y);
    // printf("x mod y = %f\n", x % y);

    return 0;
}
