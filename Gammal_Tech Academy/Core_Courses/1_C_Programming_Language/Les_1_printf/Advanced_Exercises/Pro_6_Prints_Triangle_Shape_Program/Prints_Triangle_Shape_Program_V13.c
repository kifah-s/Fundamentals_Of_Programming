

/* >>> Triangle Shape Drawing Program ( Version 13 ) <<< */

/* >>> A program that drawing triangle shape using * <<< */

#include <stdio.h>

char *wel_mas_fun(char *mas[]);
char *tri_fun(char *tri[]);

int main()
{
    char *mas[] = {"\n\nYou welcome in Triangle Shape Drawing Program ( Version 13 ) ..\n\n"};
    char *wel_mas[] = {wel_mas_fun(mas)};
    /* printf(*wel_mas); */
    printf("%s", *wel_mas);

    char *tri[] = {"\n               *\n             *   *\n            *     *\n           *       *\n          *         *\n         *           *\n        *             *\n       *               *\n      *                 *\n     *********************\n\n\n"};
    char *tri1[] = {tri_fun(tri)};
    /* printf(*tri1); */
    printf("%s", *tri1);

    return 0;
}

// Functions ..
// Welcome massage function;
char *wel_mas_fun(char *mas[])
{
    /* printf("\n\nYou welcome in Triangle Shape Drawing Program ( Version 13 ) ..\n\n"); */

    return *mas;
}

// Printing triangle function;
char *tri_fun(char *tri[])
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

    return *tri;
}