

//* Number of Digits 2 Program (Version 1).

/*
 * program to run continuously, allowing the user to enter multiple numbers and counting their digits.
 */

/*
! Input & Output:
! Please enter a number (0 to exit) : 126
! Number of digits: 3
! Please enter a number (0 to exit) : 1234
! Number of digits: 4
! Please enter a number (0 to exit) : 15987
! Number of digits: 5
! Please enter a number (0 to exit) : 0
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int receiveNumberFun(int num);
int calculateDigitsFun(int num, int couDig);
void printCounterDigitsFun(int couDig);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    while (1)
    {
        // Declare Variables.
        int number = 0, counterDigits = 0;

        // Call Functions.
        number = receiveNumberFun(number);

        if (number == 0)
        {
            break;
        }

        // Call Functions.
        counterDigits = calculateDigitsFun(number, counterDigits);
        printCounterDigitsFun(counterDigits);
    }

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Number of Digits 2 Program (Version 1) ..\n\n");
}

// Receive number - Function.
int receiveNumberFun(int num)
{
    printf("\n\nPlease enter a number (0 to exit): ");
    scanf("%d", &num);

    return num;
}

// Calculate digits - Function.
int calculateDigitsFun(int num, int couDig)
{
    while (num != 0)
    {
        num = num / 10;
        couDig++;
    }

    return couDig;
}

// Print counter digits - Function.
void printCounterDigitsFun(int couDig)
{
    printf("\nNumber of digits: %d", couDig);
}
//* End Function ..
