

//* Converts Binary To Decimal 2 Program (Version 1).

/*
 * Write a program that repeatedly converts binary numbers to their decimal equivalents,
 * The program should use a continuous loop and prompt the user to enter a binary number each time.
 */

/*
! Input:
! Please enter a binary number (Enter 0 to exit): 101

! Output:
! Decimal equivalent: 5
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingBinaryNumberFun(int binNum);
void convertsBinaryToDecimalFun(int binNum, int decNum, int pow);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    while (1)
    {
        // Declare variables.
        int binaryNumber = 0, decimalNumber = 0, power = 1;

        binaryNumber = gettingBinaryNumberFun(binaryNumber);

        if (binaryNumber == 0)
        {
            break;
        }

        convertsBinaryToDecimalFun(binaryNumber, decimalNumber, power);
    }

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Converts Binary To Decimal 2 Program (Version 1) ..\n\n");
}

// Getting binary number - Function.
int gettingBinaryNumberFun(int binNum)
{
    printf("\n\nPlease enter a binary number: ");
    scanf("%i", &binNum);

    return binNum;
}

// Converts Binary To Decimal - Function.
void convertsBinaryToDecimalFun(int binNum, int decNum, int pow)
{
    while (binNum != 0)
    {
        decNum = decNum + (binNum % 10) * pow;
        binNum = binNum / 10;
        pow = pow * 2;
    }

    printf("\nDecimal equivalent: %i", decNum);
}
//* End Function ..
