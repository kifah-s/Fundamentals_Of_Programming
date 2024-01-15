

/* >>> Name 10 Times Program ( Version 1 ) <<< */

/* >>> A program that prints a person's name 10 times (using do.. while ). <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Name 10 Times Program ( Version 1 ) ..\n\n");

    char name[30];
    int i = 0;

    printf("Please enter your name : ");
    scanf("%s", &name);

    do
    {
        printf("\n%s", name);

        i++;

    } while (i < 10);

    printf("\n\n\n");

    return 0;
}