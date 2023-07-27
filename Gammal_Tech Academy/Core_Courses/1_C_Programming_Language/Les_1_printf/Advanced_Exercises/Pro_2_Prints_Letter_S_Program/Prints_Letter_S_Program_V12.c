

/* >>> Letter " S " Drawing Program ( Version 12 ) <<< */

/* >>> A program that drawing letter " S " using * <<< */

#include <stdio.h>

char *wel_mas_fun(char *mas[]);
char *let_fun(char *line[]);

int main()
{
    char *mas1[] = {"\n\nYou welcome in Letter \" S \" Drawing Program ( Version 12 )\n\n\n"};
    printf(wel_mas_fun(mas1));

    char *line[] = {"**********\n*\n*\n*\n*\n*********\n         *\n         *\n         *\n         *\n**********\n\n\n"};
    printf(let_fun(line));

    return 0;
}

// Function..
// Welcome massage function:
char *wel_mas_fun(char *mas[])
{
    /* printf("\n\nYou welcome in Letter \" S \" Drawing Program ( Version 12 )\n\n\n"); */

    return *mas;
}

// Letter S function;
char *let_fun(char *line[])
{
    /* printf("**********\n");
        printf("*\n*\n*\n*\n");
        printf("*********\n");
        printf("         *\n");
        printf("         *\n");
        printf("         *\n");
        printf("         *\n");
        printf("**********\n\n\n"); */

    return *line;
}