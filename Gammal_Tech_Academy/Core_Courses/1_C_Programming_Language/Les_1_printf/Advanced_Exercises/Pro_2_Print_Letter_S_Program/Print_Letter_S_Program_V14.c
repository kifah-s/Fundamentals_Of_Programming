

/* >>> Letter " S " Drawing Program ( Version 14 ) <<< */

/* >>> A program that drawing letter " S " using * <<< */

#include <stdio.h>

char *wel_mas_fun(char *mas[]);
char *let_fun(char *line[]);

int main()
{
    char *mas1[] = {"\n\nYou welcome in Letter \" S \" Drawing Program ( Version 14 )\n\n\n"};
    char *wel_mas[] = {wel_mas_fun(mas1)};
    /* printf(*wel_mas); */
    printf("%s", *wel_mas);

    char *line[] = {"**********\n*\n*\n*\n*\n*********\n         *\n         *\n         *\n         *\n**********\n\n\n"};
    char *let[] = {let_fun(line)};
    /* printf(*let); */
    printf("%s", *let);

    return 0;
}

// Function..
// Welcome massage function:
char *wel_mas_fun(char *mas[])
{
    /* printf("\n\nYou welcome in Letter \" S \" Drawing Program ( Version 14 )\n\n\n"); */

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