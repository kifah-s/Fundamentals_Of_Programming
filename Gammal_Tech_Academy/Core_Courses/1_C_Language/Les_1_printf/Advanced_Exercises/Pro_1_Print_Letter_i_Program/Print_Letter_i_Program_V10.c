

/* >>> letter " i " Drawing Program ( Version 10 ) <<< */

/* >>> A program that drawing letter " i " using * <<< */

#include <stdio.h>

char *wel_mas_fun(char mas[]);
char *let_fun(char let[]);

int main()
{
    char mas[] = {"\nYou welcome in Letter \" i \" Drawing Program ( Version 10 )\n\n"};
    printf(wel_mas_fun(mas));

    char let[] = {"\nk\n\nk\nk\nk\nk\nk\n\n\n"};
    printf(let_fun(let));

    return 0;
}

// Function ..
// Welcome massage function;
char *wel_mas_fun(char mas[])
{
    return mas;
}

// Letter i function;
char *let_fun(char let[])
{
    return let;
}