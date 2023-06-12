

/* >>> letter " X " Drawing Program ( Version 9 ) <<< */

/* >>> A program that drawing letter " X " using * <<< */

#include <stdio.h>

char *wel_mas_fun();
char *let_fun();

int main()
{
    char *wel_mas[] = {wel_mas_fun()};
    printf(*wel_mas);

    char *let_x[] = {let_fun()};
    printf(*let_x);

    return 0;
}

// Functions ..
// Welcome massage function;
char *wel_mas_fun()
{
    /* printf("\n\nYou welcome in Letter \" X \" Drawing Program ( Version 9 ) ..\n\n\n"); */

    char *mas[] = {"\n\nYou welcome in Letter \" X \" Drawing Program ( Version 9 ) ..\n\n\n"};

    return *mas;
}

// Printing letter function;
char *let_fun()
{
    /* printf(" *                *\n");
        printf("   *            *\n");
        printf("     *        *\n");
        printf("       *    *\n");
        printf("          *\n");
        printf("       *     *\n");
        printf("     *         *\n");
        printf("   *             *\n");
        printf("*                   *\n\n\n"); */

    char *let_x[] = {" *                *\n   *            *\n     *        *\n       *    *\n          *\n       *     *\n     *         *\n   *             *\n*                   *\n\n\n"};

    return *let_x;
}