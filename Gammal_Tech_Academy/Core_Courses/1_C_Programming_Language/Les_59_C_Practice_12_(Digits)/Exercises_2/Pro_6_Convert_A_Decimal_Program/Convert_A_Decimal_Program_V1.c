

//* Convert A Decimal Program (Version 1).

/*
 * Write a program to convert a decimal number to its binary equivalent.
 */

/*
! Input:
! Please enter a Decimal number: 16

! Output:
! Binary equivalent: 10000
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void convertDecimalNumberFun(int decNum, int binNum[32]);

int main()
{
    // Declare Variables.
    int binaryNumber[32], decimalNumber = 0;

    // Call Functions.
    convertDecimalNumberFun(decimalNumber, binaryNumber);

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Convert A Decimal Program (Version 1) ..\n\n");
}

// Receive number - Function.
int receiveNumberFun(int decNum)
{
    printf("Please enter a decimal number: ");
    scanf("%d", &decNum);

    return decNum;
}

// Convert Decimal number - Function.
void convertDecimalNumberFun(int decNum, int binNum[32])
{
    welcomeMessageFun();
    decNum = receiveNumberFun(decNum);

    int index = 0;

    while (decNum > 0)
    {
        binNum[index] = decNum % 2;
        decNum = decNum / 2;
        index++;
    }

    printf("\nBinary equivalent: ");
    for (int i = index - 1; i >= 0; i--)
    {
        printf("%d", binNum[i]);
    }

    printf("\n\n");
}

//* End Function ..
