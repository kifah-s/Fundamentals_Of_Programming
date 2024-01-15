

/* >>> Records A Number Program ( Version 3 ) <<< */

/* >>> A program that records a number in a variable and prints it <<< */

#include <stdio.h>

void wel_mas_fun(char mas[]);
void var_fun(int num);

int main()
{
    wel_mas_fun("\n\nYou welcome in Records A Number Program ( Version 3 ) ..\n\n");
    var_fun(1996);

    return 0;
}

// Functions ..
// Welcome massage function;
void wel_mas_fun(char mas[])
{
    printf("%s", mas);
}

// Printing variable function;
void var_fun(int num)
{
    printf("The number that is registered in the variable is : %d\n\n\n", num);
}