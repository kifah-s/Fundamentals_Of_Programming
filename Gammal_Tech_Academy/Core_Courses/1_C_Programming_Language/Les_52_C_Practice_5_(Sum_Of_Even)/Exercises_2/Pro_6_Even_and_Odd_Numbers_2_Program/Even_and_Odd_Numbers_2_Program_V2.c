

//* Even and Odd Numbers 2 Program (Version 2).

/*
 * Write a program to calculate the sum of even and odd numbers using functions.
 */

/*
! Input:
! Please enter the limit: 30

! Output:
! Sum of of Even numbers: 240
! Sum of of Odd numbers: 225
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
    int limit = 0, sumEven = 0, sumOdd = 0;

    // Call Functions.
    calculateSumFun(limit, &sumEven, &sumOdd);

    printf("\nSum of Even numbers is: %d", sumEven);
    printf("\nSum of Odd numbers is: %d", sumOdd);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Even and Odd Numbers 2 Program (Version 2) ..\n\n");
}

// Receive limit - Function.
int receiveLimitFun(int l)
{
    printf("Please enter the limit: ");
    scanf("%d", &l);

    return l;
}

// Calculate Sum - Function.
void calculateSumFun(int l, int *sEven, int *sOdd)
{
    l = receiveLimitFun(l);

    for (int i = 1; i <= l; i++)
    {
        if (i % 2 == 0)
        {
            *sEven = *sEven + i;
        }
        else
        {
            *sOdd = *sOdd + i;
        }
    }
}
//* End Function ..
