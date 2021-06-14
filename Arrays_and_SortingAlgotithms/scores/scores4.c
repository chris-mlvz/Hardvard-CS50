#include <stdio.h>

void chart(int, int[]);

#define SIZE 3

int main()
{
    // Get scores from user
    int scores[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        printf("Score %i: ", i + 1);
        scanf("%d", &scores[i]);
    }

    // Chart scores
    chart(SIZE, scores);
}

// Generate bars
void chart(int count, int scores[])
{
    // Output one hash per point
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < scores[i]; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}