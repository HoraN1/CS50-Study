// This code is used to demonstrate how memory overflow looks like.
// Use valgrind to check memory.
// To fix:
//      line 20, change 10 to 9;
//      line 20, add "free(x)"

#include <stdlib.h>

void overflow(void);

int main(void)
{
    overflow();
    return 0;
}

void overflow(void)
{
    int *x = malloc(10 * sizeof(int));
    x[10] = 0;
}