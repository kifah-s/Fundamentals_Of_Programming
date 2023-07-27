

/* >>> Letter " F " Drawing Program ( Version 5 ) <<< */

/* >>> A program that drawing letter " F " using * <<< */

#include <stdio.h>

void wel_mas_fun(char mas[]);
void let_fun(char let1[], char let2[], char let3[], char let4[]);

int main()
{
    char mas[] = {"\n\nYou welcome in Letter \" F \" Drawing Program ( Version 5 )\n\n"};
    wel_mas_fun(mas);

    char let1[] = {"\n************\n"};
    char let2[] = {"*\n*\n*\n*\n*\n"};
    char let3[] = {"************\n"};
    char let4[] = {"*\n*\n*\n*\n*\n\n\n"};
    let_fun(let1, let2, let3, let4);

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