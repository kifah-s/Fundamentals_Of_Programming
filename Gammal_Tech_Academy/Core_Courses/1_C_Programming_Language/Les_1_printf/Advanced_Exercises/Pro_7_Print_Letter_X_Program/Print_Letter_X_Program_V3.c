

/* >>> letter " X " Drawing Program ( Version 3 ) <<< */

/* >>> A program that drawing letter " X " using * <<< */

#include <stdio.h>

void wel_mas_fun(char mas[]);
void let_fun(char let[]);

int main()
{
    wel_mas_fun("\n\nYou welcome in Letter \" X \" Drawing Program ( Version 3 ) ..\n\n\n");
    let_fun(" *                *\n");
    let_fun("   *            *\n");
    let_fun("     *        *\n");
    let_fun("       *    *\n");
    let_fun("          *\n");
    let_fun("       *     *\n");
    let_fun("     *         *\n");
    let_fun("   *             *\n");
    let_fun("*                   *\n\n\n");

    return 0;
}

// Functions ..
// Welcome massage function;
void wel_mas_fun(char mas[])
{
    printf("%s", mas);
}

// Printing letter function;
void let_fun(char let[])
{
    printf("%s", let);
}