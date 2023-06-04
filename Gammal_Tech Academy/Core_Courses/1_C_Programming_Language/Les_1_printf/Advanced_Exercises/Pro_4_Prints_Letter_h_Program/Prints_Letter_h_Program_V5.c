

/* >>> Letter " h " Drawing Program ( Version 5 ) <<< */

/* >>> A program that drawing letter " h " using * <<< */

#include <stdio.h>

void wel_mas_fun(char mas[]);
void let_fun(char let_1[]);

int main()
{
    char mas[] = {"\n\nYou welcome in Letter \" h \" Drawing Program ( Version 5 ) ..\n\n"};
    wel_mas_fun(mas);

    char let_1[] = {"\n*\n*\n*\n*\n*\n*\n*"};
    char let_2[] = {"***********\n"};
    char let_3[] = {"*          *\n"};
    char let_4[] = {"*          *\n"};
    char let_5[] = {"*          *\n"};
    char let_6[] = {"*          *\n"};
    char let_7[] = {"*          *\n\n\n"};
    let_fun(let_1);
    let_fun(let_2);
    let_fun(let_3);
    let_fun(let_4);
    let_fun(let_5);
    let_fun(let_6);
    let_fun(let_7);

    return 0;
}

// Functions ..
// Welcome massage function;
void wel_mas_fun(char mas[])
{
    printf("%s", mas);
}

// Printing letter h function;
void let_fun(char let_1[])
{
    printf("%s", let_1);
}