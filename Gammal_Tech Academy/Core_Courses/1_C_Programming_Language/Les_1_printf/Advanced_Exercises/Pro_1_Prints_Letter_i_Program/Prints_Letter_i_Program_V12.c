

/* >>> letter " i " Drawing Program ( Version 12 ) <<< */

/* >>> A program that drawing letter " i " using * <<< */

#include <stdio.h>

char *wel_mas_fun(char mas[]);
void let_fun(char let[]);

int main()
{
    char mas[] = {"\nYou welcome in Letter \" i \" Drawing Program ( Version 12 )\n\n"};
    printf(wel_mas_fun(mas));

    char let[] = {"k"};
    let_fun(let);

    return 0;
}

// Function ..
// Welcome massage function;
char *wel_mas_fun(char mas[])
{
    /* printf("%s", mas); */
    return mas;
}

// Letter i function;
void let_fun(char let[])
{
    printf("\n%s\n\n%s\n%s\n%s\n%s\n%s\n\n\n", let, let, let, let, let, let);
}