

/* >>> Positive Or NegativeProgram ( Version 2 ) <<< */

/* >>> A program that verifies if the entered number is positive or negative. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Functions ..
void welcomeMassageFun();
int getNumberFun(int x);
int PositiveOrNegativeFun(int x);

int main()
{
    welcomeMassageFun();

    int number = getNumberFun(number);
    // printf("\n%d\n\n", number); // Check.

    int posOrNeg = PositiveOrNegativeFun(number);
    if (posOrNeg == 1)
    {
        printf("\n%d is Positive.\n\n", number);
    }
    else if (posOrNeg == 0)
    {
        printf("\n%d is Negative.\n\n", number);
    }

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Positive Or NegativeProgram ( Version 2 ) ..\n\n");
}

// Get number / Function.
int getNumberFun(int x)
{
    printf("Please enter a number: ");
    scanf("%d", &x);

    return x;
}

// Positive Or Negative / Function.
int PositiveOrNegativeFun(int x)
{
    if (x > 0)
    {
        return 1;
    }
    else if (x < 0)
    {
        return 0;
    }
}