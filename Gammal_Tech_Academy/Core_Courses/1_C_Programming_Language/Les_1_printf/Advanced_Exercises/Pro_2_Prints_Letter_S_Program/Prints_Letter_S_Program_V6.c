

/* >>> Letter " S " Drawing Program ( Version 6 ) <<< */

/* >>> A program that drawing letter " S " using * <<< */

#include <stdio.h>

void wel_mas_fun(char wel[]);
void let_fun(char let_1[], char let_2[], char let_3[], char let_4[], char let_5[], char let_6[], char let_7[], char let_8[]);

int main()
{
    char wel[] = {"\n\nYou welcome in Letter \" S \" Drawing Program ( Version 6 )\n\n\n"};
    wel_mas_fun(wel);

    char let_1[] = {"**********\n"};
    char let_2[] = {"*\n*\n*\n*\n"};
    char let_3[] = {"*********\n"};
    char let_4[] = {"         *\n"};
    char let_5[] = {"         *\n"};
    char let_6[] = {"         *\n"};
    char let_7[] = {"         *\n"};
    char let_8[] = {"**********\n\n\n"};
    let_fun(let_1, let_2, let_3, let_4, let_5, let_6, let_7, let_8);

    return 0;
}

// Function..
// Welcome massage function:
void wel_mas_fun(char wel[])
{
    printf("%s", wel);
}

// Letter function;
void let_fun(char let_1[], char let_2[], char let_3[], char let_4[], char let_5[], char let_6[], char let_7[], char let_8[])
{
    printf("%s", let_1);
    printf("%s", let_2);
    printf("%s", let_3);
    printf("%s", let_4);
    printf("%s", let_5);
    printf("%s", let_6);
    printf("%s", let_7);
    printf("%s", let_8);
}