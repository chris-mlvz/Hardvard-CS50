#include <stdio.h>

int main()
{
    // Prompt user for integer
    int n;
    printf("n: ");
    scanf("%i", &n);

    // Check parity of integer
    if (n % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }

    return 0;
}
