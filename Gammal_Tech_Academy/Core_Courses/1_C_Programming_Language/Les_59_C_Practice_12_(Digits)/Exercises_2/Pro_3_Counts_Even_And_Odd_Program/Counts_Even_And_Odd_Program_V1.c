

//* Counts Even And Odd Program (Version 1).

/*
 * Write a program that counts the number of even and odd digits in a given number.
 */

/*
! Input:
! Please enter a number: 5689

! Output:
! Number of Even digits: 2
! Number of Odd digits: 2
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void printNumOfEvenAndOddFun(int num, int numOfE, int numOfO);

int main()
{
    // Declare Variables.
    int number = 0, numOfEven = 0, numOfOdd = 0;

    // Call Functions.
    printNumOfEvenAndOddFun(number, numOfEven, numOfOdd);

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Counts Even And Odd Program (Version 1) ..\n\n");
}

// Receive number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Calculate number of even digits - Function.
int calcNumOfEvenDigFun(int num, int numOfE)
{
    while (num)
    {
        int dig = num % 10;

        if (dig % 2 == 0)
        {
            numOfE++;
        }

        num = num / 10;
    }

    return numOfE;
}

// Calculate number of odd digits - Function.
int calcNumOfOddDigFun(int num, int numOfO)
{
    while (num)
    {
        int dig = num % 10;

        if (dig % 2 != 0)
        {
            numOfO++;
        }

        num = num / 10;
    }

    return numOfO;
}

// Print number of even and odd - Function.
void printNumOfEvenAndOddFun(int num, int numOfE, int numOfO)
{
    welcomeMessageFun();
    num = receiveNumberFun(num);
    numOfE = calcNumOfEvenDigFun(num, numOfE);
    numOfO = calcNumOfOddDigFun(num, numOfO);

    printf("\nNumber of Even digits: %d\n", numOfE);
    printf("Number of Even Odd: %d\n\n", numOfO);
}
//* End Function ..
