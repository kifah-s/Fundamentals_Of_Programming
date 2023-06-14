

/* >>> letter " X " Drawing Program ( Version 12 ) <<< */

/* >>> A program that drawing letter " X " using * <<< */

#include <stdio.h>

char *wel_mas_fun(char *mas[]);
char *let_fun(char *let[]);

int main()
{
    char *mas[] = {"\n\nYou welcome in Letter \" X \" Drawing Program ( Version 12 ) ..\n\n\n"};
    /* char *wel_mas[] = {wel_mas_fun(mas)}; */
    /* printf(wel_mas_fun(mas)); */
    printf("%s", wel_mas_fun(mas));

    char *let[] = {" *                *\n   *            *\n     *        *\n       *    *\n          *\n       *     *\n     *         *\n   *             *\n*                   *\n\n\n"};
    /* char *let_x[] = {let_fun(let)}; */
    /* printf(let_fun(let)); */
    printf("%s", let_fun(let));

    return 0;
}

// Functions ..
// Welcome massage function;
char *wel_mas_fun(char *mas[])
{
    /* printf("\n\nYou welcome in Letter \" X \" Drawing Program ( Version 12 ) ..\n\n\n"); */

    return *mas;
}

// Printing letter function;
char *let_fun(char *let[])
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

    return *let;
}