

//* Counts Occurrences Program (Version 1).

/*
 * Write a program that takes an integer and a digit as input and counts the occurrences of that digit.
 */

/*
! Input:
! Please enter a number: 12342
! Please enter the digit to count: 2

! Output:
! Occurrences of digits 2: 2
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printCounterDigitsFun(int num, int couDig, int dig);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int number = 0, counterDigit = 0, digit = 0;

    // Call Functions.
    printCounterDigitsFun(number, counterDigit, digit);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Counts Occurrences Program (Version 1) ..\n\n");
}

// Receive number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Receive digit - Function.
int receiveDigitFun(int dig)
{
    printf("Please enter the digit to count: ");
    scanf("%d", &dig);

    return dig;
}

// Counter digits - Function.
int counterDigitsFun(int num, int couDig, int dig)
{
    while (num != 0)
    {
        int che = num % 10;

        if (dig == che)
        {
            couDig++;
        }

        num = num / 10;
    }

    return couDig;
}

// Print counter digits - Function.
void printCounterDigitsFun(int num, int couDig, int dig)
{
    num = receiveNumberFun(num);
    dig = receiveDigitFun(dig);
    couDig = counterDigitsFun(num, couDig, dig);

    printf("\nOccurrences of digits %d: %d", dig, couDig);
}
//* End Function ..
