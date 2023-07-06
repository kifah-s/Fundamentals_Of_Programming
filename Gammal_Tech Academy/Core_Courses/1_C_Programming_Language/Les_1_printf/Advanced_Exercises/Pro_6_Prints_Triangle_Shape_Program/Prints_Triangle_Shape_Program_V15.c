

/* >>> Triangle Shape Drawing Program ( Version 15 ) <<< */

/* >>> A program that drawing triangle shape using * <<< */

#include <stdio.h>

char *wel_mas_fun();
char *tri_fun();

int main()
{
    /* printf(wel_mas_fun()); */
    printf("%s", wel_mas_fun());

    /* printf(tri_fun()); */
    printf("%s", tri_fun());

    return 0;
}

// Functions ..
// Welcome massage function;
char *wel_mas_fun()
{
    /* printf("\n\nYou welcome in Triangle Shape Drawing Program ( Version 15 ) ..\n\n"); */

    char *mas[] = {"\n\nYou welcome in Triangle Shape Drawing Program ( Version 15 ) ..\n\n"};

    return *mas;
}

// Printing triangle function;
char *tri_fun()
{
    /* printf("\n               *\n");
        printf("             *   *\n");
        printf("            *     *\n");
        printf("           *       *\n");
        printf("          *         *\n");
        printf("         *           *\n");
        printf("        *             *\n");
        printf("       *               *\n");
        printf("      *                 *\n");
        printf("     *********************\n\n\n"); */

    char *tri[] = {"\n               *\n             *   *\n            *     *\n           *       *\n          *         *\n         *           *\n        *             *\n       *               *\n      *                 *\n     *********************\n\n\n"};

    return *tri;
}