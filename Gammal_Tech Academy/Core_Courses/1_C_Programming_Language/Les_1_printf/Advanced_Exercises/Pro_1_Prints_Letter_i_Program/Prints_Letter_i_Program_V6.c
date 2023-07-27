

/* >>> letter " i " Drawing Program ( Version 6 ) <<< */

/* >>> A program that drawing letter " i " using * <<< */

#include <stdio.h>

void wel_mas_fun(char mas[]);
void let_fun(char let[]);

int main()
{
    char mas[] = {"\nYou welcome in Letter \" i \" Drawing Program ( Version 6 )\n\n"};
    wel_mas_fun(mas);

    let_fun("i");

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
    printf("\n%s\n\n%s\n%s\n%s\n%s\n%s\n\n\n", let, let, let, let, let, let);
}