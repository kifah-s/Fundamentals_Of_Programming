

//* Sum Of Odd Numbers 2 Program (Version 2).

/*
 * Write a program to find the sum of odd numbers up to a user-defined
 */

/*
! Input:
! Please enter the limit: 18

! Output:
! Sum of of Odd numbers: 81
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void calculateSumFun(int l, int s);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int limit = 0, sum = 0;

    // Call Functions.
    calculateSumFun(limit, sum);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum Of Odd Numbers 2 Program (Version 2) ..\n\n");
}

// Receive limit - Function.
int receiveLimitFun(int l)
{
    printf("Please enter the limit: ");
    scanf("%d", &l);

    return l;
}

// Calculate Sum - Function.
void calculateSumFun(int l, int s)
{
    l = receiveLimitFun(l);

    for (int i = 1; i <= l; i = i + 2)
    {
        s = s + i;
    }

    printf("\nSum of Odd numbers is: %d", s);
}
//* End Function ..