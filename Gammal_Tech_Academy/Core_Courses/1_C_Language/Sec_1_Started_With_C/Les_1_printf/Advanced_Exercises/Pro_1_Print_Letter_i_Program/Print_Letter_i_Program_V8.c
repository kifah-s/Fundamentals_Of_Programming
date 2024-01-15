

/* >>> letter " i " Drawing Program ( Version 8 ) <<< */

/* >>> A program that drawing letter " i " using * <<< */

#include <stdio.h>

char *wel_mas_fun();
char *let_fun();

int main()
{
    printf(wel_mas_fun());
    
    printf(let_fun());
    
    return 0;
}

// Function ..
// Welcome massage function;
char *wel_mas_fun()
{
    char *wel_mas[] = {"\nYou welcome in Letter \" i \" Drawing Program ( Version 8 )\n\n"};
    return *wel_mas;
}

// Letter i function;
char *let_fun()
{
    char *let_i[] = {"\n*\n\n*\n*\n*\n*\n*\n\n\n"};
    return *let_i;
}