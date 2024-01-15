

/* >>> Square Shape Drawing Program ( Version 7 ) <<< */

/* >>> A program that drawing square shape using * <<< */

#include <stdio.h>

char *wel_mas_fun();
char *squ_fun();

int main()
{
    /* printf(wel_mas_fun()); */
    printf("%s", wel_mas_fun());

    /* printf(squ_fun()); */
    printf("%s", squ_fun());

    return 0;
}

// Functions..
// Welcome massage function;
char *wel_mas_fun()
{
    /* printf("\n\nYou welcome in Square Shape Drawing Program ( Version 7 ) ..\n\n"); */

    char *mas[] = {"\n\nYou welcome in Square Shape Drawing Program ( Version 7 ) ..\n\n"};

    return *mas;
}

// Printing square function;
char *squ_fun()
{
    /* printf("\n*****************\n");
        printf("*               *\n");
        printf("*               *\n");
        printf("*               *\n");
        printf("*               *\n");
        printf("*               *\n");
        printf("*****************\n\n\n"); */

    char *squ[] = {"\n*****************\n*               *\n*               *\n*               *\n*               *\n*               *\n*****************\n\n\n"};

    return *squ;
}