

//* Product Of Digits Program (Version 1).

/*
 * Create a program to find the product of the digits of a given number.
 */

/*
! Input:
! Please enter a number: 152

! Output:
! product of digits: 10
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void printProductOfDigitFun(int num, int proOfDig);

int main()
{
    // Declare Variables.
    int number = 0, productOfDigits = 1;

    // Call Functions.
    printProductOfDigitFun(number, productOfDigits);

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Product Of Digits Program (Version 1) ..\n\n");
}

// Receive number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Calculate product of digits - Function.
int calculateProductOfDigitsFun(int num, int proOfDig)
{
    int digit = 0;

    while (num)
    {
        digit = num % 10;

        proOfDig = proOfDig * digit;

        num = num / 10;
    }

    return proOfDig;
}

// Print product of digit - Function.
void printProductOfDigitFun(int num, int proOfDig)
{
    welcomeMessageFun();
    num = receiveNumberFun(num);
    proOfDig = calculateProductOfDigitsFun(num, proOfDig);

    printf("\nproduct of digits: %d\n\n", proOfDig);
}
//* End Function ..
