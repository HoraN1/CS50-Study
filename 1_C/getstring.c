#include <stdio.h>

int main(void)
{
    char name[20];
    char region[20];
    int age;
    
    printf("What is your name? Answer: ");
    fgets(name, 20, stdin);
    printf("Your name is %s\n", name); // fgets will get the string and ends with a '\n'
    
    printf("Where are you from? Answer: ");
    scanf("%[^\n]%*c", region);
    printf("You are from %s.\n\n", region);

    printf("How old are you? Answer: ");
    scanf("%d", &age);
    printf("You are %d years old.\n", age);
    
    return(0);
}