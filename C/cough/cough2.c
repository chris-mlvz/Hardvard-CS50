#include <stdio.h>

void cough();

int main()
{
    for (int i = 0; i < 3; i++)
    {
        cough();
    }
    return 0;
}

void cough()
{
    printf("cough\n");
}