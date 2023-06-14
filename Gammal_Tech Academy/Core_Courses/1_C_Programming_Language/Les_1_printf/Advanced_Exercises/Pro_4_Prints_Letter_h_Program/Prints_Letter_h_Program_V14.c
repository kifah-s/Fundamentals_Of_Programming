

/* >>> Letter " h " Drawing Program ( Version 14 ) <<< */

/* >>> A program that drawing letter " h " using * <<< */

#include <stdio.h>

char *wel_mas_fun();
char *let_fun();

int main()
{
    char *wel_mas[] = {wel_mas_fun()};
    /* printf(*wel_mas); */
    printf("%s", *wel_mas);

    char *let_h[] = {let_fun()};
    /* printf(*let_h); */
    printf("%s", *let_h);

    return 0;
}

// Functions ..
// Welcome massage function;
char *wel_mas_fun()
{
    /* printf("\n\nYou welcome in Letter \" h \" Drawing Program ( Version 14 ) ..\n\n"); */

    char *mas[] = {"\n\nYou welcome in Letter \" h \" Drawing Program ( Version 14 ) ..\n\n"};

    return *mas;
}

// Printing letter h function;
char *let_fun()
{
    /*  printf("\n*\n*\n*\n*\n*\n*\n*");
        printf("***********\n");
        printf("*          *\n");
        printf("*          *\n");
        printf("*          *\n");
        printf("*          *\n");
        printf("*          *\n\n\n"); */

    char *let_h[] = {"\n*\n*\n*\n*\n*\n*\n************\n*          *\n*          *\n*          *\n*          *\n*          *\n\n\n"};

    return *let_h;
}