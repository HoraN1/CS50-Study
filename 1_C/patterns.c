#include <stdio.h>

int ask_size(void);

int main(void)
{
    int size;

    do
    {
        size = ask_size();
    } while (size < 1);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("#");
        }
        
        printf("\n");
    }
}

int ask_size(void)
{
    int size_input;

    printf("What is the size for the pattern: ");
    scanf("%d", &size_input);

    return size_input;
}