

//* Converts Binary To Decimal 3 Program (Version 1).

/*
 * Write a program that includes a function fun to convert a binary number to its decimal equivalent,
 * The program should use the fun function to repeatedly prompt
 * the user to enter binary numbers until they enter 0 to exit.
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
void convertsBinaryToDecimalFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    convertsBinaryToDecimalFun();

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Converts Binary To Decimal 3 Program (Version 1) ..\n\n");
}

// Getting binary number - Function.
int gettingBinaryNumberFun(int binNum)
{
    printf("\n\nPlease enter a binary number: ");
    scanf("%i", &binNum);

    return binNum;
}

// Converts Binary To Decimal - Function.
void convertsBinaryToDecimalFun()
{
    while (1)
    {
        // Declare variables.
        int binaryNumber = 0, decimalNumber = 0, power = 1;

        binaryNumber = gettingBinaryNumberFun(binaryNumber);

        if (binaryNumber == 0)
        {
            break;
        }

        while (binaryNumber != 0)
        {
            decimalNumber = decimalNumber + (binaryNumber % 10) * power;
            binaryNumber = binaryNumber / 10;
            power = power * 2;
        }

        printf("\nDecimal equivalent: %i", decimalNumber);
    }
}
//* End Function ..
