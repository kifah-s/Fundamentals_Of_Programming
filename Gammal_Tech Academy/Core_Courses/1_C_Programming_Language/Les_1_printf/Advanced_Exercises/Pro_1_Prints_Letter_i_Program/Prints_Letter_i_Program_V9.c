

/* >>> letter " i " Drawing Program ( Version 9 ) <<< */

/* >>> A program that drawing letter " i " using * <<< */

#include <stdio.h>

char *wel_mas_fun();
char *let_fun();

int main()
{
    char *wel_mas[] = {wel_mas_fun()};
    printf(*wel_mas);

    char *let_i[] = {let_fun()};
    printf(*let_i);
    
    return 0;
}

// Function ..
// Welcome massage function;
char *wel_mas_fun()
{
    char *wel_mas[] = {"\nYou welcome in Letter \" i \" Drawing Program ( Version 9 )\n\n"};
    return *wel_mas;
}

// Letter i function;
char *let_fun()
{
    char *let_i[] = {"\n*\n\n*\n*\n*\n*\n*\n\n\n"};
    return *let_i;
}