

//* Between 1 and 100 Program (Version 1).

/*
 * Check if a number is between 1 and 100 using the ternary operator.
 */

/*
! Input:
! Please enter a number: 99

! Output:
! The number is Between 1 and 100.
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
    printf("\n\nYou welcome in Between 1 and 100 Program (Version 1) ..\n\n");
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

    (num >= 1 && num <= 100) ? printf("\nThe number is Between 1 and 100.")
                             : printf("\nThe number is Not Between 1 and 100.");
}

//* End Function ..
