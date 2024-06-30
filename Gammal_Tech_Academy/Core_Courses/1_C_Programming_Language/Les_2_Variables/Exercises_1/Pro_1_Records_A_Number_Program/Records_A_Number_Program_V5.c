

/* >>> Records A Number Program ( Version 5 ) <<< */

/* >>> A program that records a number in a variable and prints it <<< */

#include <stdio.h>

void wel_mas_fun(char mas[]);
int var_fun(int num);

int main()
{
    char mas[] = {"\n\nYou welcome in Records A Number Program ( Version 5 ) ..\n\n"};
    wel_mas_fun(mas);

    int num = 1996;
    var_fun(num);

    printf("The number that is registered in the variable is : %d\n\n\n", num);

    return 0;
}

// Functions ..
// Welcome massage function;
void wel_mas_fun(char mas[])
{
    printf("%s", mas);
}

// Printing variable function;
int var_fun(int num)
{
    return num;
}