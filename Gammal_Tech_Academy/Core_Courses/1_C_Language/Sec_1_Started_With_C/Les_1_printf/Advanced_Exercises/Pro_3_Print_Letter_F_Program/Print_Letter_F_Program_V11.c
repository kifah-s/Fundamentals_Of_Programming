

/* >>> Letter " F " Drawing Program ( Version 11 ) <<< */

/* >>> A program that drawing letter " F " using * <<< */

#include <stdio.h>

char *wel_mas_fun(char *mas[]);
char *let_fun(char *let[]);

int main()
{
    char *mas[] = {"\n\nYou welcome in Letter \" F \" Drawing Program ( Version 11 )\n\n"};
    char *wel_mas[] = {wel_mas_fun(mas)};
    printf(*wel_mas);

    char *let[] = {"\n************\n*\n*\n*\n*\n*\n*************\n*\n*\n*\n*\n\n\n"};
    char *let_f[] = {let_fun(let)};
    printf(*let_f);

    return 0;
}

// Functions ..
// Welcome massage function;
char *wel_mas_fun(char *mas[])
{
    /* printf("\n\nYou welcome in Letter \" F \" Drawing Program ( Version 11 )\n\n"); */

    return *mas;
}

// Printing letter f function;
char *let_fun(char *let[])
{
    /* printf("\n************\n");
        printf("*\n*\n*\n*\n*\n");
        printf("************\n");
        printf("*\n*\n*\n*\n*\n\n\n"); */

    return *let;
}