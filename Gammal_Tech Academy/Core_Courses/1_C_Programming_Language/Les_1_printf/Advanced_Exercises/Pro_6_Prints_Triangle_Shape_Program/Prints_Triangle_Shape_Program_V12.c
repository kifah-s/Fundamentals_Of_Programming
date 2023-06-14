

/* >>> Triangle Shape Drawing Program ( Version 12 ) <<< */

/* >>> A program that drawing triangle shape using * <<< */

#include <stdio.h>

char *wel_mas_fun(char *mas[]);
char *tri_fun(char *tri[]);

int main()
{
    char *mas[] = {"\n\nYou welcome in Triangle Shape Drawing Program ( Version 12 ) ..\n\n"};
    /* char *wel_mas[] = {wel_mas_fun(mas)}; */
    /* printf(wel_mas_fun(mas)); */
    printf("%s", wel_mas_fun(mas));

    char *tri[] = {"\n               *\n             *   *\n            *     *\n           *       *\n          *         *\n         *           *\n        *             *\n       *               *\n      *                 *\n     *********************\n\n\n"};
    /* char *tri1[] = {tri_fun(tri)}; */
    /* printf(tri_fun(tri)); */
    printf("%s", tri_fun(tri));

    return 0;
}

// Functions ..
// Welcome massage function;
char *wel_mas_fun(char *mas[])
{
    /* printf("\n\nYou welcome in Triangle Shape Drawing Program ( Version 12 ) ..\n\n"); */

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