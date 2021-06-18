#include <stdio.h>
#include <string.h>

#include "struct.h"
#define MAX 20

void clear_stdin(void);

int main()
{
    // Space for students
    int enrollment;
    printf("Enrollment: ");
    scanf("%i", &enrollment);
    student students[enrollment];
    clear_stdin();

    // Prompt for students' names and dorms
    for (int i = 0; i < enrollment; i++)
    {
        printf("Name: ");
        fgets(students[i].name, MAX, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;

        printf("Dorm: ");
        fgets(students[i].dorm, MAX, stdin);
        students[i].dorm[strcspn(students[i].dorm, "\n")] = 0;
    }

    // printf(""); for students' names and dorms
    for (int i = 0; i < enrollment; i++)
    {
        printf("%s is in %s. \n", students[i].name, students[i].dorm);
    }

    return 0;
}

/* Clear input stream */
void clear_stdin(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
        continue;
    }
}