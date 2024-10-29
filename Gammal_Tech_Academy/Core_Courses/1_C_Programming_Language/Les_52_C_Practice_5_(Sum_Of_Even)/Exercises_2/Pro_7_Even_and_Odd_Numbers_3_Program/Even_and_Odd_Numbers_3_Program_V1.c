

//* Even and Odd Numbers 3 Program (Version 1).

/*
 * Write a program to calculate the sum of even and odd numbers from 1 to 15 using a while loop.
 */

/*
! Output:
! Sum of of Even numbers: 56
! Sum of of Odd numbers: 64
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
    printf("\n\nYou welcome in Even and Odd Numbers 3 Program (Version 1) ..\n\n");
}

// Calculate Sum - Function.
void calculateSumFun(int sEven, int sOdd)
{
    int i = 0;
    while (i <= 15)
    {
        if (i % 2 == 0)
        {
            sEven = sEven + i;
        }
        else
        {
            sOdd = sOdd + i;
        }

        i++;
    }

    printf("Sum of Even numbers is: %d", sEven);
    printf("\nSum of Odd numbers is: %d", sOdd);
}
//* End Function ..
