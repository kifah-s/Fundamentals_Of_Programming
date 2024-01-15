

/* >>> Digits Number Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter a number, and prints the digits in the number, each digit on a single line. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int getNumberFun();
void printDigitsNumberFun(int number);

int main()
{
    welcomeMassageFun();

    int number = getNumberFun(number);
    // printf("\n%d\n\n", number);

    printDigitsNumberFun(number);

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Digits Number Program ( Version 1 ) ..\n\n");
}

// Get number / function;
int getNumberFun(int number)
{
    number = 0;
    printf("Please enter a number: ");
    scanf("%d", &number);

    return number;
}

// Print Digits Number / function;
void printDigitsNumberFun(int number)
{
    while (number > 0)
    {
        printf("\nDigit: %d", number % 10); // Print last digit from number;
        number /= 10;                       // Remove last digit from number;
    }
    printf("\n\n");
}