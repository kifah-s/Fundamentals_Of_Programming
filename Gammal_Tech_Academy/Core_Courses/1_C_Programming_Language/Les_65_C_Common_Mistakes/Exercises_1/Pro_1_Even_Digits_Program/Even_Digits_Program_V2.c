

/* >>> Even Digits Program ( Version 2 ) <<< */

/* >>> A program that asks the user to enter a number and the program counts the number of even numbers in each number. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int getNumberFun(int number);
void evenDigitsFun(int number);

int main()
{
    welcomeMassageFun();

start:

    int number = getNumberFun(number);

    evenDigitsFun(number);

    goto start;

    return 0;
}

// Functions ..
// Welcome massage / function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Even Digits Program ( Version 2 ) ..\n\n");
}

// Get number / function;
int getNumberFun(int number)
{
    printf("Please enter a number: ");
    scanf("%d", &number);

    return number;
}

// Even Digits / function;
void evenDigitsFun(int number)
{
    int counter = 0;
    while (number > 0)
    {
        // Extract the last Digit.
        if (number % 2 == 0)
        {
            counter++;
        }
        number = number / 10; // Remove last Digit.
    }
    printf("\nEven Digit numbers: %d", counter);
    printf("\n\n\n");
}