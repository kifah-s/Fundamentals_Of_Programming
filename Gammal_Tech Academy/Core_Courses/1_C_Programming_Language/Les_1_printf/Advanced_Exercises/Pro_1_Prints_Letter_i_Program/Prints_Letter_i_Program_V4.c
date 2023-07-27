

/* >>> letter " i " Drawing Program ( Version 4 ) <<< */

/* >>> A program that drawing letter " i " using * <<< */

#include <stdio.h>

void wel_mas_fun(char mas[]);
void let_fun(char let[]);

int main()
{

    wel_mas_fun("\nYou welcome in Letter \" i \" Drawing Program ( Version 4 )\n\n");

    let_fun("\n*\n\n*\n*\n*\n*\n*\n\n\n");

    return 0;
}

// Function ..
// Welcome massage function;
void wel_mas_fun(char mas[])
{
    printf("%s", mas);
}

// Letter i function;
void let_fun(char let[])
{
    printf("%s", let);
}