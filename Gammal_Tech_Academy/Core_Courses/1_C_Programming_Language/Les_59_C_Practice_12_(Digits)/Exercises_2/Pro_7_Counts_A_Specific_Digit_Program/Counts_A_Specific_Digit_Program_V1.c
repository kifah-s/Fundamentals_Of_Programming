

//* Counts A Specific Digit Program (Version 1).

/*
 * Write a program that counts the occurrences of a specific digit in a given number.
 */

/*
! Input:
! Please enter a number: 93365
! Please enter a digit to count: 3

! Output:
! occurrences of digit 3 in 93365: 2
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void printCounterFun(int num, int dig, int couDig);

int main()
{
    // Declare Variables.
    int number = 0, digit = 0, counterDigit = 0;

    // Call Functions.
    printCounterFun(number, digit, counterDigit);

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Counts A Specific Digit Program (Version 1) ..\n\n");
}

// Receive number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Receive Digit - Function.
int receiveDigitFun(int dig)
{
    printf("Please enter a digit to count: ");
    scanf("%d", &dig);

    return dig;
}

// Count digit in number - Function.
int countDigitInNumberFun(int num, int dig, int couDig)
{
    int temporary = 0;

    while (num)
    {
        temporary = num % 10;
        
        if (temporary == dig)
        {
            couDig++;
        }
        num = num / 10;
    }

    return couDig;
}

// Print counter - Function.
void printCounterFun(int num, int dig, int couDig)
{
    welcomeMessageFun();
    num = receiveNumberFun(num);
    dig = receiveDigitFun(dig);
    couDig = countDigitInNumberFun(num, dig, couDig);

    printf("\noccurrences of digit %d in %d: %d\n\n", dig, num, couDig);
}
//* End Function ..
