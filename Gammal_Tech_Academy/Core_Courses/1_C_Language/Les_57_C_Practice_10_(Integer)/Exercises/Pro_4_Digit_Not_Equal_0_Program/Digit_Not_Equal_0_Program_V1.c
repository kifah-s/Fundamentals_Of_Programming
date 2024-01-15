

/* >>> Digits Not Equal 0 Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter a number, and the program counts the number of numbers that does not equal 0 in each number and it is repeated from the first each time (in two different ways). <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int getNumberFun();
int DigitsNotEqual0Fun(int number);

int main()
{
    welcomeMassageFun();

    int number = getNumberFun();
    /* printf("\n%d\n\n", number); */

    DigitsNotEqual0Fun(number);

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Digits Not Equal 0 Program ( Version 1 ) ..\n\n");
}

// Get number / function;
int getNumberFun()
{
    int number = 0;
    printf("Please enter a number: ");
    scanf("%d", &number);

    return number;
}

// Digits Not Equal 0 / function;
int DigitsNotEqual0Fun(int number)
{
    int counter = 0;
    while (number /* number > 0 */ )
    {
        if (number % 10 != 0)
        {
            counter++;
        }
        number /= 10;
    }
    printf("\nDigits Not Equal 0 is: %d\n\n", counter);
}