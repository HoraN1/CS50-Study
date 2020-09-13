#include <stdio.h>

int main(int argc, char *argv[])
{
    // This code read the command line and store it into argv[] as an array of strings
    // say: ./argv Horace
    // then, argc = 2, argv[2] = {""./argv", "Horace"};
    if (argc == 2)
    {
        printf("Hello, %s\n", argv[1]); // argv[1] is "Horace".
    }
    else
    {
        printf("Hello, World!\n");
    }
}