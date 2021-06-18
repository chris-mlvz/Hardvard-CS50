#include <stdio.h>

#define MAX 20

int main()
{
    int enrollment;
    printf("Enrollment: ");
    scanf("%i", &enrollment);
    char names[enrollment][MAX];
    char dorms[enrollment][MAX];

    for (int i = 0; i < enrollment; i++)
    {
        printf("Name: ");
        fgets(names[i], MAX, stdin);

        printf("Dorm: ");
        fgets(dorms[i], MAX, stdin);
    }

    return 0;
}