

/* >>> Triangle Shape Drawing Program ( Version 3 ) <<< */

/* >>> A program that drawing triangle shape using * <<< */

#include <stdio.h>

void wel_mas_fun(char mas[]);
void tri_fun(char tri[]);

int main()
{
    wel_mas_fun("\n\nYou welcome in Triangle Shape Drawing Program ( Version 3 ) ..\n\n");
    tri_fun("\n               *\n");
    tri_fun("             *   *\n");
    tri_fun("            *     *\n");
    tri_fun("           *       *\n");
    tri_fun("          *         *\n");
    tri_fun("         *           *\n");
    tri_fun("        *             *\n");
    tri_fun("       *               *\n");
    tri_fun("      *                 *\n");
    tri_fun("     *********************\n\n\n");

    return 0;
}

// Functions ..
// Welcome massage function;
void wel_mas_fun(char mas[])
{
    printf("%s", mas);
}

// Printing triangle function;
void tri_fun(char tri[])
{
    printf("%s", tri);
}