#include <stdio.h>

void chart(int);

int main()
{
    int score1, score2, score3;
    printf("Score 1: ");
    scanf("%i", &score1);
    printf("Score 2: ");
    scanf("%i", &score2);
    printf("Score 3: ");
    scanf("%i", &score3);

    printf("Score 1: ");
    chart(score1);
    printf("Score 2: ");
    chart(score2);
    printf("Score 3: ");
    chart(score3);
}

void chart(int score)
{
    for (int i = 0; i < score; i++)
    {
        printf("#");
    }
    printf("\n");
}