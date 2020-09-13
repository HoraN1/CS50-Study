#include <stdio.h>

int main(void)
{
    int a = 2;
    int b = a; // Assign b a new address and pass the value of a to it.
    int *c = &a; // Assign a address to pointer c, use *c to access the value at that adress, c is the address.

    printf("The value of a is %d, the address is %p\n", a, &a);
    printf("The value of b is %d, the address is %p\n", b, &b);
    printf("The value of c is %d, the address is %p\n", *c, c);
}