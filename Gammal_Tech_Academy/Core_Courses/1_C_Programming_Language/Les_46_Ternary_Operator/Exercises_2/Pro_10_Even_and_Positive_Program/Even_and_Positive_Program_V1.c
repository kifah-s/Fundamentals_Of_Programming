

//* Even and Positive Program (Version 1).

/*
 * Check if a number is both even and positive using the ternary operator.
 */

/*
! Input:
! Please enter a number: 6

! Output:
! The number is Even and Positive.
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
    printf("\n\nYou welcome in Even and Positive Program (Version 1) ..\n\n");
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

    (num > 0 && num % 2 == 0) ? printf("\nThe number is Even and Positive.")
                              : printf("\nThe number is Not Even and Positive.");
}

//* End Function ..
