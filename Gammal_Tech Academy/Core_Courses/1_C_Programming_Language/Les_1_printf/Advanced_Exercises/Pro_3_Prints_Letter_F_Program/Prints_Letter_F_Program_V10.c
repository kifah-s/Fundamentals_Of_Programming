

/* >>> Letter " F " Drawing Program ( Version 10 ) <<< */

/* >>> A program that drawing letter " F " using * <<< */

#include <stdio.h>

char *wel_mas_fun();
char *let_fun();

int main()
{
    char *mas[] = {wel_mas_fun()};
    printf(*mas);

    char *let_f[] = {let_fun()};
    printf(*let_f);

    return 0;
}

// Functions ..
// Welcome massage function;
char *wel_mas_fun()
{
    /* printf("\n\nYou welcome in Letter \" F \" Drawing Program ( Version 10 )\n\n"); */

    char *mas[] = {"\n\nYou welcome in Letter \" F \" Drawing Program ( Version 10 )\n\n"};

    return *mas;
}

// Printing letter f function;
char *let_fun()
{
    /* printf("\n************\n");
        printf("*\n*\n*\n*\n*\n");
        printf("************\n");
        printf("*\n*\n*\n*\n*\n\n\n"); */

    char *let_f[] = {"\n************\n*\n*\n*\n*\n*\n*************\n*\n*\n*\n*\n\n\n"};

    return *let_f;
}