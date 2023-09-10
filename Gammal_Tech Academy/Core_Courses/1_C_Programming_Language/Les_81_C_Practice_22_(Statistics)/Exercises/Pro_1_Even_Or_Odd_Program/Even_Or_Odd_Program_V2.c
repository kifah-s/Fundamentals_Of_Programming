

/* >>> Even Or Odd Program ( Version 2 ) <<< */

/* >>> A program that verifies if the entered number is odd or even. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Functions ..
void welcomeMassageFun();
int getNumberFun(int x);
int evenOrOddFun(int x);

int main()
{
    welcomeMassageFun();

    int number = getNumberFun(number);
    // printf("\n%d\n\n", number); // Check.

    int posOrNeg = evenOrOddFun(number);
    if (posOrNeg == 1)
    {
        printf("\n%d is Even.\n\n", number);
    }
    else if (posOrNeg == 0)
    {
        printf("\n%d is Odd.\n\n", number);
    }

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Even Or Odd Program ( Version 2 ) ..\n\n");
}

// Get number / Function.
int getNumberFun(int x)
{
    printf("Please enter a number: ");
    scanf("%d", &x);

    return x;
}

// Even Or Odd / Function.
int evenOrOddFun(int x)
{
    if (x % 2 == 0)
    {
        return 1;
    }
    else if (x % 2 == 1)
    {
        return 0;
    }
}