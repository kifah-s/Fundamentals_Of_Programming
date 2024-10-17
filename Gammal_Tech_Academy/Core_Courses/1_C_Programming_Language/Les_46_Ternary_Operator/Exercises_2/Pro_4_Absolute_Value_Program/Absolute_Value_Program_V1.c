

//* Absolute Value Program (Version 1).

/*
 * Calculate the absolute value of a number using the ternary operator.
 */

/*
! Input:
! Please enter a number: -9

! Output:
! The Absolute Value is 9.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int gettingNumberFun(int num);
void calcAbsoluteValueFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Call Functions.
    calcAbsoluteValueFun();

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Absolute Value Program (Version 1) ..\n\n");
}

// Getting Number - Function.
int gettingNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Calculate Absolute Value - Function.
void calcAbsoluteValueFun()
{
    int num = gettingNumberFun(num);

    (num >= 0) ? printf("\nThe Absolute Value is %d", num) : printf("\nThe Absolute Value is %d", (num * -1));
}

//* End Function ..
