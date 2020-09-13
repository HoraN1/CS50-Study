#include <stdio.h>
#include <string.h>

const int LENGTH = 4;

int main(void)
{
    int int_list[4] = {1, 2, 3, 4};
    char *names[4] = {"A", "B", "C", "D"};
    int int_founded = 0;
    int str_founded = 0;

    // Linear Search for integers
    printf("Start to search for integer.\n");
    for (int i = 0; i < LENGTH; i++)
    {
        if (int_list[i] == 4)
        {
            int_founded = 1;
            break;
        }
    }
    if (int_founded == 0)
    {
        printf("Not Found.\n");
    }
    else
    {
        printf("Found target.\n");
    }
    

    //Linear Search for strings
    printf("Start to search for stirngs.\n");
    for (int i = 0; i < LENGTH; i++)
    {
        if (strcmp(names[i], "D") == 0)
        {
            str_founded = 1;
        }       
    }
    if (str_founded == 0)
    {
        printf("Not Found.\n");
    }
    else
    {
        printf("Found target.\n");
    }
    
}