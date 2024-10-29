

//* Squares Program (Version 1).

/*
 * Write a program to calculate the sum of squares of the first 5 natural numbers using a for loop.
 */

/*
! Output:
! Sum of squares of the first 5 natural numbers: 55
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void calculateSumSquaresFun(int s);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int sum = 0;

    // Call Functions.
    calculateSumSquaresFun(sum);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Squares Program (Version 1) ..\n\n");
}

// Calculate sum of squares - Function.
void calculateSumSquaresFun(int s)
{
    for (int i = 1; i <= 5; i++)
    {
        // s = (i * i) + s;
        s += i * i;
    }

    printf("Sum of squares of the first 5 natural numbers: %d", s);
}
//* End Function ..
