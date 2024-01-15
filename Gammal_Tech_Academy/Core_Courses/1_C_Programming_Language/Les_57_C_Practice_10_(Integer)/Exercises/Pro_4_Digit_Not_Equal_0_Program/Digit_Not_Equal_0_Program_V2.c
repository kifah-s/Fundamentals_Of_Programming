

/* >>> Digits Not Equal 0 Program ( Version 2 ) <<< */

/* >>> A program that asks the user to enter a number, and the program counts the number of numbers that does not equal 0 in each number and it is repeated from the first each time (in two different ways). <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int DigitsNotEqual0Fun();

int main()
{
    welcomeMassageFun();

    DigitsNotEqual0Fun();

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Digits Not Equal 0 Program ( Version 2 ) ..\n\n");
}

// Digits Not Equal 0 / function;
int DigitsNotEqual0Fun()
{
start:

    int number = 0, counter = 0;
    printf("Please enter a number: ");
    scanf("%d", &number);

    while (number /* number > 0 */ )
    {
        if (number % 10 != 0)
        {
            counter++;
        }
        number /= 10;
    }
    printf("\nDigits Not Equal 0 is: %d\n\n", counter);

    goto start;
}