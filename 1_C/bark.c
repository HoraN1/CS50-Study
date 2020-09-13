#include <stdio.h>

void bark(int);

int main(void)
{
    int order;

    printf("How many times you want to bark: ");
    scanf("%d", &order);
    bark(order);

    return 0;
}

void bark(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Woof!\n");
    }
}