

//* Simple Weekday Program (Version 1).

/*
 * Create a program that uses an enumeration for simple
 * weekday values (Weekday and Weekend). Prompt the
 * user to enter a number (1-2) to select a weekday type and
 * print the selected weekday type.
 */

/*
! Input:
! Please enter a number (1 - 2) to select a Weekday type: 1

! Output:
! Selected weekday type: weekday.
*/

#include <stdio.h>
#include <string.h>

// Declare Enum.
enum weekday
{
    weekday = 1,
    weekend
};

void welcomeMessageFun();
int gettingNumberFun(int n);
void printWeekdayFun(int n);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variable.
    int num = 0;

    // Call Functions.
    num = gettingNumberFun(num);
    printWeekdayFun(num);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Simple weekday Program (Version 1) ..\n\n");
}

// Getting number - Function.
int gettingNumberFun(int n)
{
    printf("Please enter a number (1 - 2) to select a weekday type: ");
    scanf("%d", &n);

    return n;
}

// Print weekday - Function.
void printWeekdayFun(int n)
{
    if (n >= weekday && n <= weekend)
    {
        printf("Selected weekday type: ");
        switch (n)
        {
        case weekday:
            printf("Weekday.");
            break;

        case weekend:
            printf("Weekend.");
            break;

        default:
            break;
        }
    }
    else
    {
        printf("Invalid input, please enter a number between 1 and 2.");
    }
}
//* End Function ..
