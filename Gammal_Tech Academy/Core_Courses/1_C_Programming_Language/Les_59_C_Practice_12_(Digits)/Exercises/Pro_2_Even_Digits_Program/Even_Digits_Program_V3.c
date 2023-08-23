

/* >>> Even Digits Program ( Version 3 ) <<< */

/* >>> A program that asks the user to enter a number, and prints out the digits (even digits) of this number. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int getNumberFun();
void evenDigitsFun(int number);

int main()
{
    welcomeMassageFun();

    int number = getNumberFun(number);
    // printf("\n%d\n\n", number);

    evenDigitsFun(number);

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Even Digits Program ( Version 3 ) ..\n\n");
}

// Get number / function;
int getNumberFun(int number)
{
    number = 0;
    printf("Please enter a number: ");
    scanf("%d", &number);

    return number;
}

// Print Even Digits / function;
void evenDigitsFun(int number)
{
    while (number)
    {
        if (number % 2 == 0)
        {
            printf("\nEven Digit: %d", number % 10);
        }
        number /= 10;
    }
    printf("\n\n");
}