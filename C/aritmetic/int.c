#include <stdio.h>
// cc main.cpp ./src/*.cpp -o main && ./main


int main()
{
    int i;
    printf("Integer: ");
    scanf("%i", &i);

    printf("hello, %i\n", i);
    return 0;
}