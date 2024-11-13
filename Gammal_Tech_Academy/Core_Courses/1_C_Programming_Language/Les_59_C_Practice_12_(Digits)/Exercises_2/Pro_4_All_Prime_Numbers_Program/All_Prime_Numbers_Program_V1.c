

//* All Prime Numbers Program (Version 1).

/*
 * Write a program that prints all prime numbers in a given range.
 */

/*
! Input:
! Please enter a rage start: 10
! Please enter a rage end: 20

! Output:
! Prime number between 10 and 20 are:
! 11
! 13
! 17
! 19
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void printAllPrimeNumbersFun(int ranSta, int ranEnd);

int main()
{
    // Declare Variables.
    int rangeStart = 0, rangeEnd = 0;

    // Call Functions.
    printAllPrimeNumbersFun(rangeStart, rangeEnd);

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in All Prime Numbers Program (Version 1) ..\n\n");
}

// Receive Range Start - Function.
int receiveRangeStartFun(int ranSta)
{
    printf("Please enter a range start: ");
    scanf("%d", &ranSta);

    return ranSta;
}

// Receive Range End - Function.
int receiveRangeEndFun(int ranEnd)
{
    printf("Please enter a range end: ");
    scanf("%d", &ranEnd);

    return ranEnd;
}

// Print all prime numbers - Function.
void printAllPrimeNumbersFun(int ranSta, int ranEnd)
{

    welcomeMessageFun();
    ranSta = receiveRangeStartFun(ranSta);
    ranEnd = receiveRangeEndFun(ranEnd);

    printf("\nPrime number between %d and %d are:\n", ranSta, ranEnd);
    for (int i = ranSta; i <= ranEnd; i++)
    {
        bool pri = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                pri = false;
            }
        }
        if (pri == true)
        {
            printf("%d\n", i);
        }
    }

    printf("\n\n");
}
//* End Function ..
