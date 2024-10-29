

//* Even and Odd Numbers 4 Program (Version 2).

/*
 * Write a program to calculate the sum of even and odd numbers from 1 to 20 using a do-while loop.
 */

/*
! Output:
! Sum of of Even numbers: 110
! Sum of of Odd numbers: 100
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void calculateSumFun(int l, int *sEven, int *sOdd);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int limit = 20, sumEven = 0, sumOdd = 0;

    // Call Functions.
    calculateSumFun(limit, &sumEven, &sumOdd);

    printf("Sum of Even numbers is: %d", sumEven);
    printf("\nSum of Odd numbers is: %d", sumOdd);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Even and Odd Numbers 4 Program (Version 2) ..\n\n");
}

// Calculate Sum - Function.
void calculateSumFun(int l, int *sEven, int *sOdd)
{
    int i = 0;
    do
    {
        if (i % 2 == 0)
        {
            *sEven = *sEven + i;
        }
        else
        {
            *sOdd = *sOdd + i;
        }

        i++;
    } while (i <= l);
}
//* End Function ..
