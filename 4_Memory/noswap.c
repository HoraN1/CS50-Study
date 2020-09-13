// This code exlpores how swap is made within memory

#include <stdio.h>

void noswap(int a, int b);
void swap(int *a, int *b);

int main(void)
{
    int a = 1, b = 2;

    printf("a = %d, b = %d \n", a, b);
    noswap(a, b); // Passing the value of a, b into noswap, so the execution of the function has no effect on the a, b varibles.
    printf("The noswap function results:\na = %d, b = %d \n", a, b);
    swap(&a, &b);
    printf("The swap function results:\na = %d, b = %d\n", a, b);
}

void noswap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void swap(int *a, int *b)
{
    int tmp = *a;   // Passging the value at the address a to tmp
    *a = *b;        // Passing the value at the address b to the address a
    *b = tmp;       // Passing the value of tmp to the address b
}