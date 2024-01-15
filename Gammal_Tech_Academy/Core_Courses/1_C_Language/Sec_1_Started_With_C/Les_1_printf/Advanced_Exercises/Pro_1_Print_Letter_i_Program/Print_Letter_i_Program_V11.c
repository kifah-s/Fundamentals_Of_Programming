

/* >>> letter " i " Drawing Program ( Version 11 ) <<< */

/* >>> A program that drawing letter " i " using * <<< */

#include <stdio.h>

char *wel_mas_fun(char mas[]);
char *let_fun(char let[]);

int main()
{
    char mas[] = {"\nYou welcome in Letter \" i \" Drawing Program ( Version 11 )\n\n"};
    char *wel_mas[] = {wel_mas_fun(mas)};
    printf(*wel_mas);

    char let[] = {"\nk\n\nk\nk\nk\nk\nk\n\n\n"};
    char *let_i[] = {let_fun(let)};
    printf(*let_i);

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