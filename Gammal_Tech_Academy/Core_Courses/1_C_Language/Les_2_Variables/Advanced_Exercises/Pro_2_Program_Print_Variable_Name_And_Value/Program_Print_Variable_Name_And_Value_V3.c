

/* >>> Program Print Variable Name And Value It ( Version 3 ) <<< */

/* >>> A program that assigns a number in a variable and prints the variable's name and value. <<< */

#include <stdio.h>

void wel_mas_fun();
int var_nam_fun(int number);
void var_val_fun(int number);

int main()
{
    wel_mas_fun();

    int number = 10;

    var_val_fun(var_nam_fun(number));

    return 0;
}

// Functions ..

// Welcome massage function;
void wel_mas_fun()
{
    printf("\n\nYou welcome in Program Print Variable Name And Value It ( Version 3 )  ..\n\n");
}

// Variable name function;
int var_nam_fun(int number)
{
    printf("Variable Name : number\n");
    return number;
}

// Variable value function;
void var_val_fun(int number)
{
    printf("Variable Value : %d\n\n\n", number);
}