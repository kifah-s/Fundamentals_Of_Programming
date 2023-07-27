

/* >>> Letter " S " Drawing Program ( Version 9 ) <<< */

/* >>> A program that drawing letter " S " using * <<< */

#include <stdio.h>

char *wel_mas_fun();
char *let_fun();

int main()
{
    printf(wel_mas_fun());
    printf(let_fun());

    return 0;
}

// Function..
// Welcome massage function:
char *wel_mas_fun()
{
    /* printf("\n\nYou welcome in Letter \" S \" Drawing Program ( Version 9 )\n\n\n"); */

    char *mas[] = {"\n\nYou welcome in Letter \" S \" Drawing Program ( Version 9 )\n\n\n"};

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