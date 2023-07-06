

/* >>> letter " X " Drawing Program ( Version 4 ) <<< */

/* >>> A program that drawing letter " X " using * <<< */

#include <stdio.h>

void wel_mas_fun(char mas[]);
void let_fun(char let1[], char let2[], char let3[], char let4[], char let5[], char let6[], char let7[], char let8[], char let9[]);

int main()
{
    wel_mas_fun("\n\nYou welcome in Letter \" X \" Drawing Program ( Version 4 ) ..\n\n");
    let_fun(" *                *\n", "   *            *\n", "     *        *\n", "       *    *\n", "          *\n", "       *     *\n", "     *         *\n", "   *             *\n", "*                   *\n\n\n");

    return 0;
}

// Functions ..
// Welcome massage function;
void wel_mas_fun(char mas[])
{
    printf("%s", mas);
}

// Printing triangle function;
void let_fun(char let1[], char let2[], char let3[], char let4[], char let5[], char let6[], char let7[], char let8[], char let9[])
{
    printf("%s", let1);
    printf("%s", let2);
    printf("%s", let3);
    printf("%s", let4);
    printf("%s", let5);
    printf("%s", let6);
    printf("%s", let7);
    printf("%s", let8);
    printf("%s", let9);
    
}