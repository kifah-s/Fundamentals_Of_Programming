

/* >>> Square Shape Drawing Program ( Version 5 ) <<< */

/* >>> A program that drawing square shape using * <<< */

#include <stdio.h>

void wel_mas_fun(char mas[]);
void squ_fun(char squ_1[]);

int main()
{
    char mas[] = {"\n\nYou welcome in Square Shape Drawing Program ( Version 5 ) ..\n\n"};
    wel_mas_fun(mas);

    char squ_1[] = {"\n*****************\n"};
    char squ_2[] = {"*               *\n"};
    char squ_3[] = {"*****************\n\n\n"};
    squ_fun(squ_1);
    squ_fun(squ_2);
    squ_fun(squ_2);
    squ_fun(squ_2);
    squ_fun(squ_2);
    squ_fun(squ_3);

    return 0;
}

// Functions..
// Welcome massage function;
void wel_mas_fun(char mas[])
{
    printf("%s", mas);
}

// Printing square function;
void squ_fun(char squ_1[])
{
    printf("%s", squ_1);
}