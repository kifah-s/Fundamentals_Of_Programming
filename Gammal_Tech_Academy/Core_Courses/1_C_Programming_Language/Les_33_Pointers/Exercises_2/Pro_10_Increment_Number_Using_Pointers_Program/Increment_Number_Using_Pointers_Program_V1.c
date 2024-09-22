

//* Increment Number Using Pointers Program (Version 1).

/*
 * Program to Increment a Number using Pointers.
 */

/*
! Input:
! Please enter a number: 5

! Output:
! After Increment: 6
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
int gettingNumberFun(int num);
void incrementNumberFun(int *poi);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    int number = 0;

    // Call functions.
    number = gettingNumberFun(number);
    incrementNumberFun(&number);

    printf("\nAfter increment: %d\n", number);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Increment Number Using Pointers Program (Version 1) ..\n\n");
}

// Getting number - Function.
int gettingNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Increment number - Function.
void incrementNumberFun(int *poi)
{
    (*poi)++;
}
//* End Function ..
