

/* >>> Records A Number Program ( Version 4 ) <<< */

/* >>> A program that records a number in a variable and prints it <<< */

#include <stdio.h>

void wel_mas_fun(char mas[]);
void var_fun(int num);

int main()
{
    char mas[] = {"\n\nYou welcome in Records A Number Program ( Version 4 ) ..\n\n"};
    wel_mas_fun(mas);

    int num = 1996;
    var_fun(num);

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