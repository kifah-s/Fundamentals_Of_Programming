

//* Sum Of Digits Program (Version 1).

/*
 * Write a program that takes an integer input from the user and prints the sum of its digits.
 */

/*
! Input:
! Please enter an integer: 123

! Output:
! Sum od digits: 6
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingNumberFun(int binNum);
void sumOfDigitsFun(int num, int sum);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    int number = 0, sum = 0;

    number = gettingNumberFun(number);
    sumOfDigitsFun(number, sum);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum Of Digits Program (Version 1) ..\n\n");
}

// Getting number - Function.
int gettingNumberFun(int num)
{
    printf("Please enter a binary number: ");
    scanf("%i", &num);

    return num;
}

// Sum Of Digits - Function.
void sumOfDigitsFun(int num, int sum)
{
    while (num != 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }

    printf("\nSum: %i", sum);
}
//* End Function ..
