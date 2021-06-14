#include <stdio.h>

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        printf("missing command-ine argument\n");
        return 1;
    }
    printf("hello, %s\n", argv[1]);
    return 0;
}
// echo $? // see the value of return in terminal