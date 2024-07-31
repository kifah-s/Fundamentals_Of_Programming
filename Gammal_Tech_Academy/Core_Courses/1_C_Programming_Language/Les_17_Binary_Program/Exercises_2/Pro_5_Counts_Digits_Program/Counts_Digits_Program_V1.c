

//* Counts Digits Program (Version 1).

/*
 * Write a program that prompts the user to enter a number
 * and counts the number of digits in that number.
 */

/*
! Input:
! Please enter a number: 12345

! Output:
! Number of digits: 5
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingNumberFun(int num);
void countsDigitsFun(int num, int couDig);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    int number = 0, countDigits = 0;

    number = gettingNumberFun(number);

    countsDigitsFun(number, countDigits);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Counts Digits Program (Version 1) ..\n\n");
}

// Getting number - Function.
int gettingNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%i", &num);

    return num;
}

// Counts Digits - Function.
void countsDigitsFun(int num, int couDig)
{
    while (num != 0)
    {
        couDig++;
        num = num / 10;
    }

    printf("\nNumber of digits: %i", couDig);
}
//* End Function ..
