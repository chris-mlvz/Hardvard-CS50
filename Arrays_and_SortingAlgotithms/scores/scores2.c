#include <stdio.h>

void chart(int);

#define SIZE 3

int main()
{
    // Get scpres from user
    int scores[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        printf("Score %i: ", i + 1);
        scanf("%d", &scores[i]);
    }

    // Chart scores
    for (int i = 0; i < SIZE; i++)
    {
        printf("Score %i: ", i + 1);
        chart(scores[i]);
    }
}

void chart(int score)
{
    for (int i = 0; i < score; i++)
    {
        printf("#");
    }
    printf("\n");
}