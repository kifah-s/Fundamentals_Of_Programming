

/* >>> Square Shape Drawing Program ( Version 6 ) <<< */

/* >>> A program that drawing square shape using * <<< */

#include <stdio.h>

void wel_mas_fun(char mas[]);
void squ_fun(char squ_1[]);

int main()
{
    char mas[] = {"\n\nYou welcome in Square Shape Drawing Program ( Version 6 ) ..\n\n"};
    wel_mas_fun(mas);

    char squ_1[] = {"#"};
    squ_fun(squ_1);

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
    printf("\n%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n", squ_1, squ_1, squ_1, squ_1, squ_1, squ_1, squ_1, squ_1, squ_1, squ_1, squ_1, squ_1, squ_1, squ_1, squ_1, squ_1, squ_1);
    printf("%s               %s\n", squ_1, squ_1);
    printf("%s               %s\n", squ_1, squ_1);
    printf("%s               %s\n", squ_1, squ_1);
    printf("%s               %s", squ_1, squ_1);
    printf("\n%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n\n\n", squ_1, squ_1, squ_1, squ_1, squ_1, squ_1, squ_1, squ_1, squ_1, squ_1, squ_1, squ_1, squ_1, squ_1, squ_1, squ_1, squ_1);
}