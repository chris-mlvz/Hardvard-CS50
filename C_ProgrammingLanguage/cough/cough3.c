#include <stdio.h>

void cough();

int main()
{
    cough(3);
    return 0;
}

void cough(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("cough\n");
    }
}