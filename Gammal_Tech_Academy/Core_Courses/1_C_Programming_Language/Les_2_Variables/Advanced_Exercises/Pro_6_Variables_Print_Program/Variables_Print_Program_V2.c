

/* >>> Variables Print Program ( Version 2 ) <<< */

/* >>> Now you know how to assigns a number in a variable, but let's do this better.
Required : Write a program that assigns a number in one variable and another number in another variable and prints the two variables between them with a + sign, then print their sum at the end. Example x + y = 15. <<< */

#include <stdio.h>

void wel_mas_fun();
int var_fun(int x, int y);

int main()
{
    wel_mas_fun();

    int x = 5,
        y = 5;
    var_fun(x, y);

    return 0;
}

// Functions;

// Welcome massage function;
void wel_mas_fun()
{
    printf("\n\nYou welcome in Variables Print Program ( Version 2 ) ..\n\n");
}

// Variable function;
int var_fun(int x, int y)
{
    int result = x + y;

    printf("x + y = %d\n\n\n", result);
}