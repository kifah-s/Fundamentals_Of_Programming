

//* Even and Odd Program (Version 1).

/*
 * Write a program that takes an integer as input and counts the number of even and odd digits.
 */

/*
! Input:
! Please enter a number: 12345

! Output:
! Even digits: 2
! Odd digits: 3
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printCounterDigitsFun(int num, int couEveDig, int couOddDig);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int number = 0, counterEvenDigit = 0, counterOddDigit = 0;

    // Call Functions.
    printCounterDigitsFun(number, counterEvenDigit, counterOddDigit);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Even and Odd Program (Version 1) ..\n\n");
}

// Receive number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// counter Even digit - Function.
int counterEvenFun(int num, int couEveDig)
{
    while (num != 0)
    {
        int dig = num % 10;

        if (dig % 2 == 0)
        {
            couEveDig++;
        }

        num = num / 10;
    }

    return couEveDig;
}

// counter Odd digit - Function.
int counterOddFun(int num, int couOddDig)
{
    while (num != 0)
    {
        int dig = num % 10;

        if (dig % 2 != 0)
        {
            couOddDig++;
        }

        num = num / 10;
    }

    return couOddDig;
}

// Print counter digits - Function.
void printCounterDigitsFun(int num, int couEveDig, int couOddDig)
{
    num = receiveNumberFun(num);
    couEveDig = counterEvenFun(num, couEveDig);
    couOddDig = counterOddFun(num, couOddDig);

    printf("\nEven digits: %d", couEveDig);
    printf("\nOdd digits: %d", couOddDig);
}
//* End Function ..
