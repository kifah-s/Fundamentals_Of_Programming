

/* >>> Digit Odd Number Program ( Version 2 ) <<< */

/* >>> A program that asks the user to enter a number and the program counts the number of odd numbers in each number and is repeated from the first time each time (in two different ways). <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int digitOddNumberFun();

int main()
{
    welcomeMassageFun();

    digitOddNumberFun();

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Digit Odd Number Program ( Version 2 ) ..\n\n");
}

// Digit Odd Number / function;
int digitOddNumberFun()
{
start:

    int number = 0, counter = 0;
    printf("Please enter a number: ");
    scanf("%d", &number);

    while (number /* number > 0 */ )
    {
        if (number % 2 == 1)
        {
            counter++;
        }
        number /= 10;
    }
    printf("\nDigit Odd Number is: %d\n\n", counter);

    goto start;
}