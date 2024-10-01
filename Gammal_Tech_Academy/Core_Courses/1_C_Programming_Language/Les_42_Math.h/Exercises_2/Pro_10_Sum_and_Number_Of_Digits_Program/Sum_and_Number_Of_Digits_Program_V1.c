

//* Sum & Number Of Digits Program (Version 1).

/*
 * Write a program that prompts the user to enter a
 * positive integer, calculates both the number of digits and
 * the sum of its digits, and then displays the results.
 */

/*
! Input:
! Please enter a positive number: 12345

! Output:
! Number Of Digits: 5
! Sum Of Digits: 15
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int gettingNumberFun(int num);
int calculateNumberOfDigitsFun(int num, int numOfDig);
int calculateSumOfDigitsFun(int num, int sum);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int number = 0, numberOfDigits = 0, sumOfDigits = 0;

    // Call Function.
    number = gettingNumberFun(number);
    numberOfDigits = calculateNumberOfDigitsFun(number, numberOfDigits);
    sumOfDigits = calculateSumOfDigitsFun(number, sumOfDigits);

    // Print Result.
    printf("\nNumber Of Digits: %d", numberOfDigits);
    printf("\nSum Of Digits: %d", sumOfDigits);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum & Number Of Digits Program (Version 1) ..\n\n");
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

// Calculate Sum Of Digits - Function.
int calculateSumOfDigitsFun(int num, int sum)
{
    while (num != 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }

    return sum;
}
//* End Function ..
