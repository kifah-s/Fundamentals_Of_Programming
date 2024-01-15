

/* >>> Records A Number Program ( Version 2 ) <<< */

/* >>> A program that records a number in a variable and prints it <<< */

#include <stdio.h>

void wel_mas_fun();
void var_fun();

int main()
{
    wel_mas_fun();
    var_fun();

    return 0;
}

// Functions ..
// Welcome massage function;
void wel_mas_fun()
{
    printf("\n\nYou welcome in Records A Number Program ( Version 2 ) ..\n\n");
}

// Printing variable function;
void var_fun()
{
    int number = 1996;
    printf("The number that is registered in the variable is : %d\n\n\n", number);
}