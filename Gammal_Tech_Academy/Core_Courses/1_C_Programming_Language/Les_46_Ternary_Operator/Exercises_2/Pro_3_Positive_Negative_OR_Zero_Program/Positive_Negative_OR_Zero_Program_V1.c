

//* Positive, Negative, OR Zero Program (Version 1).

/*
 * Check if a number is positive, negative, or zero using the ternary operator.
 */

/*
! Input:
! Please enter a number: -6

! Output:
! The number is Negative.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int gettingNumberFun(int num);
void checkNumbersFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Call Functions.
    checkNumbersFun();

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Positive, Negative, OR Zero Program (Version 1) ..\n\n");
}

// Getting Number - Function.
int gettingNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Check Number - Function.
void checkNumbersFun()
{
    int num = gettingNumberFun(num);

    (num > 0) ? printf("\nThe number is Positive.") : (num < 0) ? printf("\nThe number is Negative.")
                                                                : printf("\nThe number is 0.");
}

//* End Function ..
