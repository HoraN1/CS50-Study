#include <stdio.h>

int main(void)
{
    char s[7] = "ABCDE";

    // To iterate over strings, s < length also works where length = strlen(s)
    for (int i = 0; s[i] != '\0'; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}