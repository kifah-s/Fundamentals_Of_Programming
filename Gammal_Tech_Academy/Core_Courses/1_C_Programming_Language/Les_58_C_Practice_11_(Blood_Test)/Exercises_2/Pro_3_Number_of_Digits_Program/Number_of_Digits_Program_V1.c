

//* Number of Digits Program (Version 1).

/*
 * Write a program that takes an integer as input and counts the number of digits in it.
 */

/*
! Input:
! Please enter a number: 1264

! Output:
! Number of Digits: 4
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printCounterFun(int num);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int number = 0;

    // Call Functions.
    printCounterFun(number);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Number of Digits Program (Version 1) ..\n\n");
}

// Receive number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Calculate Number Of Digits - Function.
int calculateNumberOfDigitsFun(int num)
{
    int counter = 0;

    num = receiveNumberFun(num);

    while (num != 0)
    {
        num /= 10;
        counter++;
    }

    return counter;
}

// Print counter - Function.
void printCounterFun(int num)
{
    int counter = calculateNumberOfDigitsFun(num);

    printf("\nNumber of Digits: %d", counter);
}
//* End Function ..
