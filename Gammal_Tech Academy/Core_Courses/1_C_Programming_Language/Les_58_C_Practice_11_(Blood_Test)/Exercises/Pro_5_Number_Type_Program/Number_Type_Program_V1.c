

/* >>> Number Type Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter a number, and analyzes the type of this number (read from the right as the left or not) such as "505". <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int getNumberFun();
int numberTypeFun(int number);

int main()
{
    welcomeMassageFun();

    int number = getNumberFun();
    // printf("\n%d\n\n", number);

    numberTypeFun(number);

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Number Type Program ( Version 1 ) ..\n\n");
}

// Get number / function;
int getNumberFun()
{
    int number = 0;
    printf("Please enter a number: ");
    scanf("%d", &number);

    return number;
}

// Number Type / function;
int numberTypeFun(int number)
{
    
}