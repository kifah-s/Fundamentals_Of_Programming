

/* >>> letter " X " Drawing Program ( Version 7 ) <<< */

/* >>> A program that drawing letter " X " using * <<< */

#include <stdio.h>

void wel_mas_fun(char mas[]);
void let_fun(char let1[]);

int main()
{
    char mas[] = {"\n\nYou welcome in Letter \" X \" Drawing Program ( Version 7 ) ..\n\n"};
    wel_mas_fun(mas);

    char let1[] = {"#"};
    let_fun(let1);

    return 0;
}

// Functions ..
// Welcome massage function;
void wel_mas_fun(char mas[])
{
    printf("%s", mas);
}

// Printing letter function;
void let_fun(char let1[])
{
    printf(" %s                %s\n", let1, let1);
    printf("   %s            %s\n", let1, let1);
    printf("     %s        %s\n", let1, let1);
    printf("       %s    %s\n", let1, let1);
    printf("          %s\n", let1);
    printf("       %s     %s\n", let1, let1);
    printf("     %s         %s\n", let1, let1);
    printf("   %s             %s\n", let1, let1);
    printf("%s                   %s\n\n\n", let1, let1);
}