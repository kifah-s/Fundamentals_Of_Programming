

/* >>> letter " X " Drawing Program ( Version 5 ) <<< */

/* >>> A program that drawing letter " X " using * <<< */

#include <stdio.h>

void wel_mas_fun(char mas[]);
void let_fun(char let1[], char let2[], char let3[], char let4[], char let5[], char let6[], char let7[], char let8[], char let9[]);

int main()
{
    char mas[] = {"\n\nYou welcome in Letter \" X \" Drawing Program ( Version 5 ) ..\n\n"};
    wel_mas_fun(mas);

    char let1[] = {" *                *\n"},
         let2[] = {"   *            *\n"},
         let3[] = {"     *        *\n"},
         let4[] = {"       *    *\n"},
         let5[] = {"          *\n"},
         let6[] = {"       *     *\n"},
         let7[] = {"     *         *\n"},
         let8[] = {"   *             *\n"},
         let9[] = {"*                   *\n\n\n"};
    let_fun(let1, let2, let3, let4, let5, let6, let7, let8, let9);

    return 0;
}

// Functions ..
// Welcome massage function;
void wel_mas_fun(char mas[])
{
    printf("%s", mas);
}

// Printing letter function;
void let_fun(char let1[], char let2[], char let3[], char let4[], char let5[], char let6[], char let7[], char let8[], char let9[])
{
    printf("%s", let1);
    printf("%s", let2);
    printf("%s", let3);
    printf("%s", let4);
    printf("%s", let5);
    printf("%s", let6);
    printf("%s", let7);
    printf("%s", let8);
    printf("%s", let9);
}