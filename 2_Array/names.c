#include <stdio.h>
#include <string.h>

int main(void)
{
    int size = 7;
    char * names[size];

    names[0] = "\0ABCDE";
    names[1] = "A\0BCDE";
    names[2] = "AB\0CDE";
    names[3] = "ABC\0DE";
    names[4] = "ABCD\0E";
    names[5] = "ABCDE\0";
    names[6] = "ABCDE";

    for (int i = 0; i < size; i++)
    {
        printf("Name %d is %s\n", i+1, names[i]);
    }

    printf("The size for a string is %ld.\n", strlen(names[6])); // What is the index -1?
}