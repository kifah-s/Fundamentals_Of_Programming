

/* >>> Records A Number Program ( Version 9 ) <<< */

/* >>> A program that records a number in a variable and prints it <<< */

#include <stdio.h>

char *wel_mas_fun();
char *reg_mas_fun();
int var_fun(int num);

int main()
{
    /* printf(wel_mas_fun()); */
    printf("%s", wel_mas_fun());

    /* printf(reg_mas_fun(), var_fun(1996)); */
    printf("%s %d", reg_mas_fun(), var_fun(1996));

    return 0;
}

// Functions ..

// Welcome massage function;
char *wel_mas_fun()
{
    char *mas[] = {"\n\nYou welcome in Records A Number Program ( Version 9 ) ..\n\n"};
    return *mas;
}

// registered massage function;
char *reg_mas_fun()
{
    char *reg[] = {"The number that is registered in the variable is :"};
    return *reg;
}

// Printing variable function;
int var_fun(int num)
{
    return num;
}