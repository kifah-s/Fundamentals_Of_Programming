

/* >>> Square Shape Drawing Program ( Version 9 ) <<< */

/* >>> A program that drawing square shape using * <<< */

#include <stdio.h>

char *wel_mas_fun(char *mas[]);
char *squ_fun(char *squ[]);

int main()
{
    char *mas[] = {"\n\nYou welcome in Square Shape Drawing Program ( Version 9 ) ..\n\n"};
    char *wel_mas[] = {wel_mas_fun(mas)};
    printf(*wel_mas);

    char *squ[] = {"\n*****************\n*               *\n*               *\n*               *\n*               *\n*               *\n*****************\n\n\n"};
    char *squ1[] = {squ_fun(squ)};
    printf(*squ1);

    return 0;
}

// Functions..
// Welcome massage function;
char *wel_mas_fun(char *mas[])
{
    /* printf("\n\nYou welcome in Square Shape Drawing Program ( Version 9 ) ..\n\n"); */

    return *mas;
}

// Printing square function;
char *squ_fun(char *squ[])
{
    /* printf("\n*****************\n");
        printf("*               *\n");
        printf("*               *\n");
        printf("*               *\n");
        printf("*               *\n");
        printf("*               *\n");
        printf("*****************\n\n\n"); */

    return *squ;
}