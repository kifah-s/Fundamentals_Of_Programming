

//* Sign Of Number Program (Version 1).

/*
 * Determine the sign of a number using the ternary operator.
 */

/*
! Input:
! Please enter a number: 0

! Output:
! The number is Zero.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int gettingNumberFun(int num);
void checkNumbersFun(int num);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variable.
    int myNumber = 0;

    // Call Functions.
    checkNumbersFun(myNumber);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sign Of Number Program (Version 1) ..\n\n");
}

// Getting Number - Function.
int gettingNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Check Number - Function.
void checkNumbersFun(int num)
{
    num = gettingNumberFun(num);

    (num > 0) ? printf("\nThe number is Positive.") : (num == 0) ? printf("\nThe number is Zero.")
                                                                 : printf("\nThe number is Negative.");
}

//* End Function ..
