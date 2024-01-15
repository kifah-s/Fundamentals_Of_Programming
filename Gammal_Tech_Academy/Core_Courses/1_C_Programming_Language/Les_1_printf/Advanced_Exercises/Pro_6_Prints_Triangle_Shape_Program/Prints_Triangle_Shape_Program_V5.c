

/* >>> Triangle Shape Drawing Program ( Version 5 ) <<< */

/* >>> A program that drawing triangle shape using * <<< */

#include <stdio.h>

void wel_mas_fun(char mas[]);
void tri_fun(char tri1[], char tri2[], char tri3[], char tri4[], char tri5[], char tri6[], char tri7[], char tri8[], char tri9[], char tri10[]);

int main()
{
    char mas[] = {"\n\nYou welcome in Triangle Shape Drawing Program ( Version 5 ) ..\n\n"};
    wel_mas_fun(mas);

    char tri1[] = {"\n               *\n"},
         tri2[] = {"             *   *\n"},
         tri3[] = {"            *     *\n"},
         tri4[] = {"           *       *\n"},
         tri5[] = {"          *         *\n"},
         tri6[] = {"         *           *\n"},
         tri7[] = {"        *             *\n"},
         tri8[] = {"       *               *\n"},
         tri9[] = {"      *                 *\n"},
         tri10[] = {"     *********************\n\n\n"};
    tri_fun(tri1,tri2 ,tri3 ,tri4 ,tri5 ,tri6 ,tri7 ,tri8 ,tri9 ,tri10 );

    return 0;
}

// Functions ..
// Welcome massage function;
void wel_mas_fun(char mas[])
{
    printf("%s", mas);
}

// Printing triangle function;
void tri_fun(char tri1[], char tri2[], char tri3[], char tri4[], char tri5[], char tri6[], char tri7[], char tri8[], char tri9[], char tri10[])
{
    printf("%s", tri1);
    printf("%s", tri2);
    printf("%s", tri3);
    printf("%s", tri4);
    printf("%s", tri5);
    printf("%s", tri6);
    printf("%s", tri7);
    printf("%s", tri8);
    printf("%s", tri9);
    printf("%s", tri10);
}