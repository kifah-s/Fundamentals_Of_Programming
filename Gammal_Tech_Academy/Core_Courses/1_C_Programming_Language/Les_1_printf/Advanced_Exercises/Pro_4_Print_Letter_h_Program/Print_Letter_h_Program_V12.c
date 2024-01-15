

/* >>> Letter " h " Drawing Program ( Version 12 ) <<< */

/* >>> A program that drawing letter " h " using * <<< */

#include <stdio.h>

char *wel_mas_fun(char *mas[]);
char *let_fun(char *let_h[]);

int main()
{
    char *mas[] = {"\n\nYou welcome in Letter \" h \" Drawing Program ( Version 12 ) ..\n\n"};
    /* char *wel_mas[] = {}; */
    /* printf(wel_mas_fun(mas)); */
    printf("%s", wel_mas_fun(mas));

    char *let[] = {"\n*\n*\n*\n*\n*\n*\n************\n*          *\n*          *\n*          *\n*          *\n*          *\n\n\n"};
    /* char *let_h[] = {}; */
    /* printf(let_fun(let)); */
    printf("%s", let_fun(let));

    return 0;
}

// Functions ..
// Welcome massage function;
char *wel_mas_fun(char *mas[])
{
    /* printf("\n\nYou welcome in Letter \" h \" Drawing Program ( Version 12 ) ..\n\n"); */

    return *mas;
}

// Printing letter h function;
char *let_fun(char *let_h[])
{
    /*  printf("\n*\n*\n*\n*\n*\n*\n*");
        printf("***********\n");
        printf("*          *\n");
        printf("*          *\n");
        printf("*          *\n");
        printf("*          *\n");
        printf("*          *\n\n\n"); */

    return *let_h;
}