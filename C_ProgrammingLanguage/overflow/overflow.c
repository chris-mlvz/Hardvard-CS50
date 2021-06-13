#include <stdio.h>
#include <unistd.h>

int main()
{
    // Iteratively double i
    for (int i = 1;; i *= 2)
    {
        printf("%i\n", i);
        sleep(1);
    }

    return 0;
}