

/* >>> Square Shape Drawing Program ( Version 8 ) <<< */

/* >>> A program that drawing square shape using * <<< */

#include <stdio.h>

char *wel_mas_fun();
char *squ_fun();

int main()
{
    char *wel_mas[] = {wel_mas_fun()};
    printf(*wel_mas);

    char *squ[] = {squ_fun()};
    printf(*squ);

    return 0;
}

// Functions..
// Welcome massage function;
char *wel_mas_fun()
{
    /* printf("\n\nYou welcome in Square Shape Drawing Program ( Version 8 ) ..\n\n"); */

    char *mas[] = {"\n\nYou welcome in Square Shape Drawing Program ( Version 8 ) ..\n\n"};

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