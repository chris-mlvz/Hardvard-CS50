#include <stdio.h>
#include <string.h>

#include "struct.h"
#define MAX 20

void delete_n(char[]);
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
        delete_n(students[i].name);

        printf("Dorm: ");
        fgets(students[i].dorm, MAX, stdin);
        delete_n(students[i].dorm);
    }

    // Save students to disk
    FILE *file = fopen("students.csv", "w");
    if (file)
    {
        for (int i = 0; i < enrollment; i++)
        {
            fprintf(file, "%s,%s\n", students[i].name, students[i].dorm);
        }
        fclose(file);
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

// Delete \n in fgets
void delete_n(char string[])
{
    string[strcspn(string, "\n")] = 0;
}
