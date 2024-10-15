

//* Even Or Odd Program (Version 1).

/*
 * Check if a number is even or odd using the ternary operator.
 */

/*
! Input:
! Please enter a number: 6

! Output:
! The number is Even.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int gettingNumberFun(int num);
void checkNumberFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Call Functions.
    checkNumberFun();

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Even Or Odd Program (Version 1) ..\n\n");
}

// Getting Number - Function.
int gettingNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Check Number - Function.
void checkNumberFun()
{
    int num = gettingNumberFun(num);

    (num % 2 == 0) ? printf("\nThe number is Even.") : printf("\nThe number is Odd.");
}

//* End Function ..
