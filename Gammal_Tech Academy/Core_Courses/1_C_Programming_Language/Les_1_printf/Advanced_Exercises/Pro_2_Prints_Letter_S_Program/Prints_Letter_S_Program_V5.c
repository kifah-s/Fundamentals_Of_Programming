

/* >>> Letter " S " Drawing Program ( Version 5 ) <<< */

/* >>> A program that drawing letter " S " using * <<< */

#include <stdio.h>

void wel_mas_fun(char wel[]);
void let_fun(char let_1[], char let_2[], char let_3[], char let_4[], char let_5[], char let_6[], char let_7[], char let_8[]);

int main()
{
    wel_mas_fun("\n\nYou welcome in Letter \" S \" Drawing Program ( Version 5 )\n\n\n");
    
    let_fun("**********\n", "*\n*\n*\n*\n", "*********\n", "         *\n", "         *\n", "         *\n", "         *\n", "**********\n\n\n");

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