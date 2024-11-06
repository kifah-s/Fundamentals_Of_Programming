

//* Counts Zero Program (Version 1).

/*
 * Write a program that takes an integer as input and counts the number of zeros in it.
 */

/*
! Input:
! Please enter a number: 100320

! Output:
! Occurrences of zero: 3
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printCounterDigitsFun(int num, int couZer);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int number = 0, counterZero = 0;

    // Call Functions.
    printCounterDigitsFun(number, counterZero);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Counts Zero Program (Version 1) ..\n\n");
}

// Receive number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// counter zero - Function.
int counterZeroFun(int num, int couZer)
{
    while (num != 0)
    {
        if (num % 10 == 0)
        {
            couZer++;
        }

        num = num / 10;
    }

    return couZer;
}

// Print counter digits - Function.
void printCounterDigitsFun(int num, int couZer)
{
    num = receiveNumberFun(num);
    couZer = counterZeroFun(num, couZer);

    printf("\nOccurrences of Zero: %d", couZer);
}
//* End Function ..
