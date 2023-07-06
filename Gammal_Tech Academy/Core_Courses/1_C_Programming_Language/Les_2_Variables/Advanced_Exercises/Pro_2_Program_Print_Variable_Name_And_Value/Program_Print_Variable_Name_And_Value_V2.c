

/* >>> Program Print Variable Name And Value It ( Version 2 ) <<< */

/* >>> A program that assigns a number in a variable and prints the variable's name and value. <<< */

#include <stdio.h>

void wel_mas_fun();
void var_nam_val_fun();

int main()
{
    wel_mas_fun();
    var_nam_val_fun();
    
    return 0;
}

// Functions ..

// Welcome massage function;
void wel_mas_fun()
{
    printf("\n\nYou welcome in Program Print Variable Name And Value It ( Version 2 )  ..\n\n");
}

// Variable name and value function;
void var_nam_val_fun()
{
    int number = 10;
    printf("Variable Name : number \n");
    printf("Variable Value : %d\n\n\n", number);
}