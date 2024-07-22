

//* Positive Negative Zero Program (Version 1).

/*
 * Write a program to input a number and determine if it is positive, negative, or zero.
 */

/*
! Input:
! Please enter a number: -9

! Output:
! -9 is negative.
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingNumberFun(int num);
void checkNumberFun(int num);

int main()
{
    welcomeMessageFun();

    // Declare Variables.
    int number = 0;

    number = gettingNumberFun(number);
    checkNumberFun(number);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Positive Negative Zero Program (Version 1) ..\n\n");
}

// Getting number - Function.
int gettingNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%i", &num);

    return num;
}

// Check Number - Function.
void checkNumberFun(int num)
{
    switch (num > 0)
    {
    case 1:
        printf("\n%i is a positive.", num);
        break;

    case 0:
        switch (num < 0)
        {
        case 1:
            printf("\n%i is a negative.", num);
            break;

        case 0:
            printf("\nZero.");
            break;
        }
    }
}
//* End Function ..
