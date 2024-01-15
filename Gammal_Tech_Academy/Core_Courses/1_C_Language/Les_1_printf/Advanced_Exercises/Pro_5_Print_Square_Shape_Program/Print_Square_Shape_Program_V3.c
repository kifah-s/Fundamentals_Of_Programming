

/* >>> Square Shape Drawing Program ( Version 3 ) <<< */

/* >>> A program that drawing square shape using * <<< */

#include <stdio.h>

void wel_mas_fun(char mas[]);
void squ_fun(char squ_1[], char squ_2[],char squ_3[]);

int main()
{
    wel_mas_fun("\n\nYou welcome in Square Shape Drawing Program ( Version 3 ) ..\n\n");
    squ_fun("\n*****************\n","*               *\n","*****************\n\n\n");

    return 0;
}

// Functions..
// Welcome massage function;
void wel_mas_fun(char mas[])
{
    printf("%s", mas);
}

// Printing square function;
void squ_fun(char squ_1[], char squ_2[],char squ_3[])
{
    printf("%s", squ_1);
    printf("%s", squ_2);
    printf("%s", squ_2);
    printf("%s", squ_2);
    printf("%s", squ_2);
    printf("%s", squ_2);
    printf("%s", squ_3);
}