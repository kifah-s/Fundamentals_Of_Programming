

/* >>> Records A Number Program ( Version 6 ) <<< */

/* >>> A program that records a number in a variable and prints it <<< */

#include <stdio.h>

char *wel_mas_fun(char mas[]);
int var_fun(int num);

int main()
{
    char mas[] = {"\n\nYou welcome in Records A Number Program ( Version 6 ) ..\n\n"};
    wel_mas_fun(mas);
    printf(mas);

    int num = 1996;
    var_fun(num);
    printf("The number that is registered in the variable is : %d\n\n\n", num);

    return 0;
}

// Functions ..
// Welcome massage function;
char *wel_mas_fun(char mas[])
{
    return mas;
}

// Printing variable function;
int var_fun(int num)
{
    return num;
}