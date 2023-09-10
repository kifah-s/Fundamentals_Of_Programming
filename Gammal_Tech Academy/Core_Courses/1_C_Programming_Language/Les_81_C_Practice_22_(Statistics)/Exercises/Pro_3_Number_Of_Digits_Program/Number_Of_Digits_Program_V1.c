

/* >>> Number Of Digits Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter a number then it counts number of its digits. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Functions ..
void welcomeMassageFun();
int getNumberFun(int x);
void numberOfDigitsFun(int x);

int main()
{
    welcomeMassageFun();

    int number = getNumberFun(number);
    // printf("\n%d\n\n", number); // Check.

    numberOfDigitsFun(number);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Number Of Digits Program ( Version 1 ) ..\n\n");
}

// Get number / Function.
int getNumberFun(int x)
{
    printf("Please enter a number: ");
    scanf("%d", &x);

    return x;
}

// Number Of Digits / Function.
void numberOfDigitsFun(int x)
{
    int digCounter = 0, y = 0;
    printf("\nNumber Of Digits for number %d = ", x);
    while (x != 0)
    {
        y = x % 10;
        x = x / 10;
        digCounter++;
    }
    printf("%d DIG\n\n", digCounter);
}