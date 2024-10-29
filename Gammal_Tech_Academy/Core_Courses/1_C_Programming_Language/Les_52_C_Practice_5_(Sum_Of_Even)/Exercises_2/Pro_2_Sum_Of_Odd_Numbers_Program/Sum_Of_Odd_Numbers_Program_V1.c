

//* Sum Of Odd Numbers Program (Version 1).

/*
 * Write a program to calculate the sum of odd numbers from 1 to 15.
 */

/*
! Output:
! Sum of of Odd numbers from 1 to 15 is: 64
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void calculateSumFun(int s);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int sum = 0;

    // Call Functions.
    calculateSumFun(sum);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum Of Odd Numbers Program (Version 1) ..\n\n");
}

// Calculate Sum - Function.
void calculateSumFun(int s)
{
    for (int i = 0; i <= 15; i++)
    {
        if (i % 2 != 0)
        {
            s = s + i;
        }
    }

    printf("Sum of Odd numbers is: %d", s);
}
//* End Function ..
