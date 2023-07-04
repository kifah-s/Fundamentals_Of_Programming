

/* >>> Print Name 10 Times Program ( Version 2 ) <<< */

/* >>> A program that prints person's name 10 times. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Print Name 10 Times Program ( Version 2 ) ..\n\n");

    int i;
    char name[30];

    printf("\nPlease Enter your name : ");
    fgets(name, sizeof(name), stdin);

    for (i = 0; i < 10; i++)
    {
        printf("\n%s", name);
    }
    printf("\n\n\n");

    return 0;
}