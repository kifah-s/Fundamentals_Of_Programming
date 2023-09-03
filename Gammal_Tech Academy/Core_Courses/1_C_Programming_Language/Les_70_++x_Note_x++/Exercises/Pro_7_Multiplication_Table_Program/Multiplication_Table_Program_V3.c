

/* >>> Multiplication Table Program ( Version 3 ) <<< */

/* >>> A program that asks the person to enter a number and prints the multiplication table of this number from 1:10. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int getNumberFun(int number);
int multiplicationTableFun(int number);

int main()
{
    welcomeMassageFun();

    int number = 0;
    number = getNumberFun(number);
    

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Multiplication Table Program ( Version 3 ) ..\n\n");
}

// Get Number / Function.
int getNumberFun(int number)
{
    printf("Please enter a number: ");
    scanf("%d", &number);

    return number;
}

// Multiplication Table / Function.
int multiplicationTableFun(int number)
{
    
}
