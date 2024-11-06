

//* Counts Occurrences 2 Program (Version 1).

/*
 * Write a program that takes a number as input from the user,
 * and counts the occurrences of digits 3 and 5 in that number.
 * The program should then display the count of each digit.
 */

/*
! Input:
! Please enter a number: 155356

! Output:
! Occurrences of digits 3: 1
! Occurrences of digits 5: 3
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printCounterDigitsFun(int num, int couDig3, int couDig5);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int number = 0, counterDigit3 = 0, counterDigit5 = 0;

    // Call Functions.
    printCounterDigitsFun(number, counterDigit3, counterDigit5);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Counts Occurrences 2 Program (Version 1) ..\n\n");
}

// Receive number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// counter digit 3 - Function.
int counterDigit3Fun(int num, int couDig3)
{
    while (num != 0)
    {
        if (num % 10 == 3)
        {
            couDig3++;
        }

        num = num / 10;
    }

    return couDig3;
}

// counter digit 5 - Function.
int counterDigit5Fun(int num, int couDig5)
{
    while (num != 0)
    {
        if (num % 10 == 5)
        {
            couDig5++;
        }

        num = num / 10;
    }

    return couDig5;
}

// Print counter digits - Function.
void printCounterDigitsFun(int num, int couDig3, int couDig5)
{
    num = receiveNumberFun(num);
    couDig3 = counterDigit3Fun(num, couDig3);
    couDig5 = counterDigit5Fun(num, couDig5);

    printf("\nOccurrences of digits 3: %d", couDig3);
    printf("\nOccurrences of digits 5: %d", couDig5);
}
//* End Function ..
