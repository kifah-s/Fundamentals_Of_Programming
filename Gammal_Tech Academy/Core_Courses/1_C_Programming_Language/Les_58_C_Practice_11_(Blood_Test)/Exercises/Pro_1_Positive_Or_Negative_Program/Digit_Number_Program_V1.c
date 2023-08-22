

/* >>> Positive Or Negative Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter a number, and analyzes the type of the number (positive or negative). <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int getNumberFun();
int positiveOrNegativeNumFun(int number);

int main()
{
    welcomeMassageFun();

    int number = getNumberFun();
    // printf("\n%d\n\n", number);

    positiveOrNegativeNumFun(number);

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Positive Or Negative Program ( Version 1 ) ..\n\n");
}

// Get number / function;
int getNumberFun()
{
    int number = 0;
    printf("Please enter a number: ");
    scanf("%d", &number);

    return number;
}

// Positive or negative number / function;
int positiveOrNegativeNumFun(int number)
{
    if (number > 0)
    {
        printf("\nThe number \" %d \" is positive\n\n", number);
    }
    else if (number < 0)
    {
        printf("\nThe number \" %d \" is negative\n\n", number);
    }
    else
    {
        printf("\nZero\n\n");
    }
}