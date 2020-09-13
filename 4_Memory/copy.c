#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// The keypoints in this program are
// 1. Use of malloc to locate same length of memory to copy a string and free the memory after usage;
// 2. Use of strlen and strcpy to copy strings;

int main(void)
{
    char *s;
    char *t = malloc(strlen(s) + 1); // "t = s" is not working because it will copy the address of the content.
                                    // + 1 is for the "\0" charecter.
                                    // This code also initilize the memory location for s, 
                                    // the next three lines same in scanf.c but won't work for s reading input.

    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);

    strcpy(t, s);
    t[0] = toupper(t[0]);

    printf("t: %s\n", t);
    free(t);
}

