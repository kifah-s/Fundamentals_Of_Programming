

//* Divisible By 3 and 5 Program (Version 1).

/*
 * Check if a number is divisible by 3 and 5 using the ternary operator.
 */

/*
! Input:
! Please enter a number: 15

! Output:
! The number is Divisible By 3 and 5.
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
    printf("\n\nYou welcome in Divisible By 3 and 5 Program (Version 1) ..\n\n");
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

    (num % 3 == 0 && num % 5 == 0) ? printf("\nThe number is Divisible By 3 and 5.") : printf("\nThe number is Not Divisible By 3 and 5.");
}

//* End Function ..
