

/* >>> letter " X " Drawing Program ( Version 8 ) <<< */

/* >>> A program that drawing letter " X " using * <<< */

#include <stdio.h>

char *wel_mas_fun();
char *let_fun();

int main()
{
    printf(wel_mas_fun());
    
    printf(let_fun());

    return 0;
}

// Functions ..
// Welcome massage function;
char *wel_mas_fun()
{
    /* printf("\n\nYou welcome in Letter \" X \" Drawing Program ( Version 8 ) ..\n\n\n"); */

    char *mas[] = {"\n\nYou welcome in Letter \" X \" Drawing Program ( Version 8 ) ..\n\n\n"};

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