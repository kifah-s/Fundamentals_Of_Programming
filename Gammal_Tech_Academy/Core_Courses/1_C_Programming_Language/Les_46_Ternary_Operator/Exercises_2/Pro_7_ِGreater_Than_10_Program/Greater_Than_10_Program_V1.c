

//* Greater Than 10 Program (Version 1).

/*
 * Check if a number is greater than 10 using the ternary operator.
 */

/*
! Input:
! Please enter a number: 9

! Output:
! The number not greater than 10.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int gettingNumberFun(int num);
void checkNumberFun(int num);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variable.
    int myNum;

    // Call Functions.
    checkNumberFun(myNum);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Greater Than 10 Program (Version 1) ..\n\n");
}

// Getting Number - Function.
int gettingNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Check Number - Function.
void checkNumberFun(int num)
{
    num = gettingNumberFun(num);

    (num > 10) ? printf("\nThe number is greater than 10.") : printf("\nThe number is not greater than 10.");
}

//* End Function ..
