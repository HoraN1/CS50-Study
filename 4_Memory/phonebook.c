#include <stdio.h>

int main(void)
{   
    // Open a file
    FILE *file = fopen("phonebook.csv", "a");
    char name[20];
    char numer[8];

    // Ask for input data
    printf("Name: ");
    scanf("%s", name);
    printf("Number: ");
    scanf("%s", numer);

    // Write the data into file
    fprintf(file, "%s,%s\n", name, numer);

    // Close the file
    fclose(file);
}