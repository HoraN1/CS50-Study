#include <stdio.h>

typedef char *string;

int main(void)
{
    int n = 50;
    int *p = &n; // *p means p is a pointer pointing at the address of n, i.e., p = addr(n), *p = value @ addr(n).
    char *s = "50"; // s is a string, or say a pointer, pointing to the address of "50", also known as the adress of first char "5".
    char *s2 = "51";
    string str = "50";

    printf("The value of n is %d.\n", n);
    printf("The address of n is %p.\n\n", &n);

    printf("The value of p (&n) is %p.\n", p);
    printf("The value of *p (@ &n) is %d.\n\n", *p);
    
    printf("The pointer s is %s.\n", s);
    printf("The pointer s is %s.\n", s2);
    printf("The string str is %s.\n\n", str);

    printf("The pointer s is %p.\n", s);
    printf("The pointer s is %p.\n", s2);
    printf("The string str is %p.\n\n", str); // why str and s share the same address?

    printf("The pointer s points to %c.\n", *s); 
    printf("The pointer s points to %c.\n", *s2);
    printf("The string str points to %c.\n", *str);
}