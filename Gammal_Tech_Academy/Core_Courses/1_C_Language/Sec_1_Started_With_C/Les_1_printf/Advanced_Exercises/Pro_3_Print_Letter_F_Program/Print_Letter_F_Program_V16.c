

/* >>> Letter " F " Drawing Program ( Version 16 ) <<< */

/* >>> A program that drawing letter " F " using * <<< */

#include <stdio.h>

char *wel_mas_fun();
char *let_fun();

int main()
{
    /* printf(wel_mas_fun()); */
    printf("%s", wel_mas_fun());

    /* printf(let_fun()); */
    printf("%s", let_fun());

    return 0;
}

// Functions ..
// Welcome massage function;
char *wel_mas_fun()
{
    /* printf("\n\nYou welcome in Letter \" F \" Drawing Program ( Version 16 )\n\n"); */

    char *mas[] = {"\n\nYou welcome in Letter \" F \" Drawing Program ( Version 16 )\n\n"};

    return *mas;
}

// Printing letter f function;
char *let_fun()
{
    /* printf("\n************\n");
        printf("*\n*\n*\n*\n*\n");
        printf("************\n");
        printf("*\n*\n*\n*\n*\n\n\n"); */

    char *let_f[] = {"\n************\n*\n*\n*\n*\n*\n*************\n*\n*\n*\n*\n\n\n"};

    return *let_f;
}