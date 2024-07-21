

//* From 1 To 7 Program (Version 1).

/*
 * Write a program that prompts the user to enter a number representing a day of the week (from 1 to 7),
 * and prints the corresponding day's name.
 */

/*
! Input:
! Please enter a day number (1 - 7): 6

! Output:
! Thursday.
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
    printf("\n\nYou welcome in From 1 To 7 Program (Version 1) ..\n\n");
}

// Getting number - Function.
int gettingNumberFun(int num)
{
    printf("Please enter a day number (1 - 7): ");
    scanf("%i", &num);

    return num;
}

// Check number - Function.
void checkNumberFun(int num)
{
    switch (num)
    {
    case 1:
        printf("\nSaturday.");
        break;

    case 2:
        printf("\nSunday.");
        break;

    case 3:
        printf("\nMonday.");
        break;

    case 4:
        printf("\nTuesday.");
        break;

    case 5:
        printf("\nWednesday.");
        break;

    case 6:
        printf("\nThursday.");
        break;

    case 7:
        printf("\nFriday.");
        break;

    default:
        printf("\nInvalid day number.");
    }
}
//* End Function ..
