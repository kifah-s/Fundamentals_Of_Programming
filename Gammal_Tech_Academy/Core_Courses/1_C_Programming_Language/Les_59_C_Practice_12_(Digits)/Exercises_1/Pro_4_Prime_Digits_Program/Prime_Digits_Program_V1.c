

/* >>> Prime Digits Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter a number, and prints out the digits (Prime digits) of this number. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int getNumberFun();
void primeDigitsFun(int number);

int main()
{
    welcomeMassageFun();

    int number = getNumberFun(number);
    // printf("\n%d\n\n", number);

    primeDigitsFun(number);

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Prime Digits Program ( Version 1 ) ..\n\n");
}

// Get number / function;
int getNumberFun(int number)
{
    number = 0;
    printf("Please enter a number: ");
    scanf("%d", &number);

    return number;
}

// Print Prime Digits / function;
void primeDigitsFun(int number)
{
    while (number > 0)
    {
        bool prime = true;
        int checkPrime = number % 10;
        for (int i = 2; i < checkPrime; i++)
        {
            if (checkPrime % i == 0)
            {
                prime = false;
            }
        }
        if (prime == true)
        {
            printf("\nPrime Digit: %d", checkPrime);
        }
        number /= 10; // Remove last digit from number;
        checkPrime = 0;
    }
    printf("\n\n");
}