

//* Convert A Binary Program (Version 1).

/*
 * Write a program to convert a binary number to its decimal equivalent.
 */

/*
! Input:
! Please enter a binary number: 111

! Output:
! Decimal equivalent: 7
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void printDecimalNumberFun(int binNum, int decNum);

int main()
{
    // Declare Variables.
    int binaryNumber = 0, decimalNumber = 0;

    // Call Functions.
    printDecimalNumberFun(binaryNumber, decimalNumber);

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Convert A Binary Program (Version 1) ..\n\n");
}

// Receive number - Function.
int receiveNumberFun(int binNum)
{
    printf("Please enter a binary number: ");
    scanf("%d", &binNum);

    return binNum;
}

// Convert binary number - Function.
int convertBinaryNumberFun(int binNum, int decNum)
{
    int base = 1;

    while (binNum)
    {
        decNum = decNum + (binNum % 10) * base;
        binNum = binNum / 10;
        base = base * 2;
    }

    return decNum;
}

// Print decimal number - Function.
void printDecimalNumberFun(int binNum, int decNum)
{
    welcomeMessageFun();
    binNum = receiveNumberFun(binNum);
    decNum = convertBinaryNumberFun(binNum, decNum);

    printf("\nDecimal equivalent: %d\n\n", decNum);
}

//* End Function ..
