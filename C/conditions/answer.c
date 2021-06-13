#include <stdio.h>

int main()
{
    // Prompt user for answer
    char answer;
    printf("answer: ");
    scanf(" %c", &answer);

    // Check answer
    if (answer == 'Y' || answer == 'y')
    {
        printf("yes\n");
    }
    else if (answer == 'N' || answer == 'n')
    {
        printf("no\n");
    }
    return 0;
}