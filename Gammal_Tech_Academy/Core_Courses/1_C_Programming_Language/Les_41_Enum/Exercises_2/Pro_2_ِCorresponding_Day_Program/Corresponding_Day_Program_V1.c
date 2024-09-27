

//* Corresponding Day Program (Version 1).

/*
 * Create a program that uses an enumeration for days of
 * the week (Monday to Sunday). Prompt the user to enter a
 * number (1-7) and print the corresponding day.
 */

/*
! Input:
! Please enter a number (1 - 7) representing a day of the week: 5

! Output:
! Select Day: Friday
*/

#include <stdio.h>
#include <string.h>

// Declare Enum.
enum Days
{
    mon = 1,
    tue,
    wed,
    thu,
    fri,
    sat,
    sun
};

void welcomeMessageFun();
int gettingNumberFun(int n);
void printDayFun(int n);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variable.
    int num = 0;

    // Call Function.
    num = gettingNumberFun(num);
    printDayFun(num);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Days Of The Week Program (Version 1) ..\n\n");
}

// Getting number - Function.
int gettingNumberFun(int n)
{
    printf("Please enter a number (1 - 7) representing a day of the week: ");
    scanf("%d", &n);

    return n;
}

// Print day - Function.
void printDayFun(int n)
{
    if (n >= mon && n <= sun)
    {
        printf("Selected day: ");
        switch (n)
        {
        case mon:
            printf("Monday");
            break;

        case tue:
            printf("Tuesday");
            break;

        case wed:
            printf("Wednesday");
            break;

        case thu:
            printf("Thursday");
            break;

        case fri:
            printf("Friday");
            break;

        case sat:
            printf("Saturday");
            break;

        case sun:
            printf("Sunday");
            break;

        default:
            break;
        }
    }
    else
    {
        printf("Invalid input, please enter a number between 1 and 7.");
    }
}
//* End Function ..
