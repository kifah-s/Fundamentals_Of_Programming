

//* Sum Of Numbers Program (Version 1).

/*
 * Write a program that prompts the user to enter a binary number and converts it to its decimal equivalent.
 * After converting to decimal, the program calculates the sum of numbers
 * from 0 to the obtained decimal value and prints the result.
 */

/*
! Input:
! Please enter a binary number: 101

! Output:
! Decimal equivalent: 5
! Sum: 15
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingBinaryNumberFun(int binNum);
int convertsBinaryToDecimalFun(int binNum, int decNum, int pow);
void sumOfNumbersFun(int decNum, int sum);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    int binaryNumber = 0, decimalNumber = 0, power = 1, sum = 0;

    binaryNumber = gettingBinaryNumberFun(binaryNumber);
    decimalNumber = convertsBinaryToDecimalFun(binaryNumber, decimalNumber, power);
    sumOfNumbersFun(decimalNumber, sum);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum Of Numbers Program (Version 1) ..\n\n");
}

// Getting binary number - Function.
int gettingBinaryNumberFun(int binNum)
{
    printf("Please enter a binary number: ");
    scanf("%i", &binNum);

    return binNum;
}

// Converts Binary To Decimal - Function.
int convertsBinaryToDecimalFun(int binNum, int decNum, int pow)
{
    while (binNum != 0)
    {
        decNum = decNum + (binNum % 10) * pow;
        binNum = binNum / 10;
        pow = pow * 2;
    }

    printf("\nDecimal equivalent: %i", decNum);

    return decNum;
}

// Sum Of Numbers - Function.
void sumOfNumbersFun(int decNum, int sum)
{
    for (int i = 0; i <= decNum; i++)
    {
        sum = sum + i;
    }
    printf("\nSum: %i", sum);
}
//* End Function ..
