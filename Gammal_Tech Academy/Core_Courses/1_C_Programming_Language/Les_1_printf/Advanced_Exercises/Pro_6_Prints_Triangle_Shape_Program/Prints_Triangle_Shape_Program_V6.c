

/* >>> Triangle Shape Drawing Program ( Version 6 ) <<< */

/* >>> A program that drawing triangle shape using * <<< */

#include <stdio.h>

void wel_mas_fun(char mas[]);
void tri_fun(char tri1[]);

int main()
{
    char mas[] = {"\n\nYou welcome in Triangle Shape Drawing Program ( Version 6 ) ..\n\n"};
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
    tri_fun(tri1);
    tri_fun(tri2);
    tri_fun(tri3);
    tri_fun(tri4);
    tri_fun(tri5);
    tri_fun(tri6);
    tri_fun(tri7);
    tri_fun(tri8);
    tri_fun(tri9);
    tri_fun(tri10);

    return 0;
}

// Functions ..
// Welcome massage function;
void wel_mas_fun(char mas[])
{
    printf("%s", mas);
}

// Printing triangle function;
void tri_fun(char tri1[])
{
    printf("%s", tri1);
    
}