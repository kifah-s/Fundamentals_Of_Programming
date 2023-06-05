

/* >>> letter " X " Drawing Program ( Version 6 ) <<< */

/* >>> A program that drawing letter " X " using * <<< */

#include <stdio.h>

void wel_mas_fun(char mas[]);
void let_fun(char let1[]);

int main()
{
    char mas[] = {"\n\nYou welcome in Letter \" X \" Drawing Program ( Version 6 ) ..\n\n"};
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

    let_fun(let1);
    let_fun(let2);
    let_fun(let3);
    let_fun(let4);
    let_fun(let5);
    let_fun(let6);
    let_fun(let7);
    let_fun(let8);
    let_fun(let9);

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
    printf("%s", let1);
    
}