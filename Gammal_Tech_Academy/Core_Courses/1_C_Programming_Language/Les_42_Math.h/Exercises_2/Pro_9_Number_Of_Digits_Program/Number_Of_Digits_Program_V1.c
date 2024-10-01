

//* Number Of Digits Program (Version 1).

/*
 * Write a program that prompts the user to enter a
 * positive integer, calculates the number of digits in the
 * entered integer, and then displays the result.
 */

/*
! Input:
! Please enter a positive number: 1234

! Output:
! Number Of Digits: 6
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int gettingNumberFun(int num);
int calculateNumberOfDigitsFun(int num, int numOfDig);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int number = 0, numberOfDigits = 0;

    // Call Function.
    number = gettingNumberFun(number);
    numberOfDigits = calculateNumberOfDigitsFun(number, numberOfDigits);

    // Print Result.
    printf("\nNumber Of Digits: %d", numberOfDigits);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Number Of Digits Program (Version 1) ..\n\n");
}

// Getting Number - Function.
int gettingNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Calculate Number Of Digits - Function.
int calculateNumberOfDigitsFun(int num, int numOfDig)
{
    while (num != 0)
    {
        num = num / 10;
        numOfDig++;
    }

    return numOfDig;
}
//* End Function ..
