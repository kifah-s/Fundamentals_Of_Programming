

//* Even and Odd Numbers Program (Version 1).

/*
 * Write a program to calculate the sum of both even and odd numbers from 1 to 20.
 */

/*
! Output:
! Sum of of Even numbers from 1 to 20 is: 110
! Sum of of Odd numbers from 1 to 20 is: 100
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void calculateSumFun(int sEven, int sOdd);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int sumEven = 0, sumOdd = 0;

    // Call Functions.
    calculateSumFun(sumEven, sumOdd);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Even and Odd Numbers Program (Version 1) ..\n\n");
}

// Calculate Sum - Function.
void calculateSumFun(int sEven, int sOdd)
{
    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
        {
            sEven = sEven + i;
        }
        else
        {
            sOdd = sOdd + i;
        }
    }

    printf("Sum of Even numbers is: %d\n", sEven);
    printf("Sum of Odd numbers is: %d", sOdd);
}
//* End Function ..
