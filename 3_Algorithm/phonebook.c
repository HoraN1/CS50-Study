#include <stdio.h>
#include <string.h>

typedef struct
{
    char *names;
    char *numbers;
} phonebook;

int main(void)
{
    phonebook book1[4];

    book1[0].names = "A";
    book1[0].numbers = "1";

    book1[1].names = "B";
    book1[1].numbers = "2";

    book1[2].names = "C";
    book1[2].numbers = "3";

    book1[3].names = "D";
    book1[3].numbers = "4";

    for (int i = 0; i < 4; i++)
    {
        if (strcmp(book1[i].names, "D") == 0)
        {
            printf("The number for %s is %s.\n", book1[i].names, book1[i].numbers);
            return 0;
        }
    }
    printf("Not Found!\n");
    return 1;
}