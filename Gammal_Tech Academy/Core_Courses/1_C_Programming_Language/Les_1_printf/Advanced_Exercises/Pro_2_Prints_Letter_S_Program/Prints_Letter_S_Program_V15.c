

/* >>> Letter " S " Drawing Program ( Version 15 ) <<< */

/* >>> A program that drawing letter " S " using * <<< */

#include <stdio.h>

char *wel_mas_fun();
char *let_fun();

int main()
{
    char *wel_mas[] = {wel_mas_fun()};
    /* printf(*wel_mas); */
    printf("%s", *wel_mas);

    char *let[] = {let_fun()};
    /* printf(*let); */
    printf("%s", *let);

    return 0;
}

// Function..
// Welcome massage function:
char *wel_mas_fun()
{
    /* printf("\n\nYou welcome in Letter \" S \" Drawing Program ( Version 15 )\n\n\n"); */

    char *mas[] = {"\n\nYou welcome in Letter \" S \" Drawing Program ( Version 15 )\n\n\n"};

    return *mas;
}

// Letter S function;
char *let_fun()
{
    /* printf("**********\n");
        printf("*\n*\n*\n*\n");
        printf("*********\n");
        printf("         *\n");
        printf("         *\n");
        printf("         *\n");
        printf("         *\n");
        printf("**********\n\n\n"); */

    char *line[] = {"**********\n*\n*\n*\n*\n*********\n         *\n         *\n         *\n         *\n**********\n\n\n"};

    return *line;
}