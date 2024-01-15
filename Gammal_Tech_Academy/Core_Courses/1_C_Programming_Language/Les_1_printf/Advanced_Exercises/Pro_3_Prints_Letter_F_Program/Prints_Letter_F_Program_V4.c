

/* >>> Letter " F " Drawing Program ( Version 4 ) <<< */

/* >>> A program that drawing letter " F " using * <<< */

#include <stdio.h>

void wel_mas_fun(char mas[]);
void let_fun(char let1[], char let2[], char let3[], char let4[]);

int main()
{
    wel_mas_fun("\n\nYou welcome in Letter \" F \" Drawing Program ( Version 4 )\n\n");
    let_fun("\n************\n", "*\n*\n*\n*\n*\n", "************\n", "*\n*\n*\n*\n*\n\n\n");

    return 0;
}

// Functions ..
// Welcome massage function;
void wel_mas_fun(char mas[])
{
    printf("%s", mas);
}

// Printing letter f function;
void let_fun(char let1[], char let2[], char let3[], char let4[])
{
    printf("%s", let1);
    printf("%s", let2);
    printf("%s", let3);
    printf("%s", let4);
}