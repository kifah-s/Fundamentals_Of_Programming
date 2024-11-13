

//* Average Of Digits Program (Version 1).

/*
 * Create a program to find the average of the digits in a given number.
 */

/*
! Input:
! Please enter a number: 592

! Output:
! Average of digits: 5.33
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void printProductOfDigitFun(int num, float aveOfDig);

int main()
{
    // Declare Variables.
    int number = 0;
    float averageOfDigits = 0;

    // Call Functions.
    printProductOfDigitFun(number, averageOfDigits);

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Average Of Digits Program (Version 1) ..\n\n");
}

// Receive number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Calculate Average of digits - Function.
float calculateAverageOfDigitsFun(int num, float aveOfDig)
{
    int digit = 0, cou = 0;

    while (num)
    {
        digit = num % 10;
        aveOfDig = aveOfDig + digit;
        num = num / 10;
        cou++;
    }

    aveOfDig = aveOfDig / cou;

    return aveOfDig;
}

// Print product of digit - Function.
void printProductOfDigitFun(int num, float aveOfDig)
{
    welcomeMessageFun();
    num = receiveNumberFun(num);
    aveOfDig = calculateAverageOfDigitsFun(num, aveOfDig);

    printf("\nAverage of digits: %0.2f\n\n", aveOfDig);
}
//* End Function ..
