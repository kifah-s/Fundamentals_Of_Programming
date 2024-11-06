

//* Number of Digits Program (Version 1).

/*
 * Write a program to count the number of digits in a given number.
 */

/*
! Input:
! Please enter a number: 1234

! Output:
! Number of digits: 4
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printCounterDigitsFun(int num, int couDig);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int number = 0, counterDigits = 0;

    // Call Functions.
    printCounterDigitsFun(number, counterDigits);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Number of Digits Program (Version 1) ..\n\n");
}

// Receive number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Calculate digits - Function.
int calculateDigitsFun(int num, int couDig)
{
    num = receiveNumberFun(num);

    while (num != 0)
    {
        num = num / 10;
        couDig++;
    }

    return couDig;
}

// Print counter digits - Function.
void printCounterDigitsFun(int num, int couDig)
{
    couDig = calculateDigitsFun(num, couDig);

    printf("\nNumber of digits: %d", couDig);
}
//* End Function ..
