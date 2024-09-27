

//* Simple Status Program (Version 1).

/*
 * Create a program that uses an enumeration for simple
 * status values (Active and Inactive). Prompt the user to
 * enter a number (1-2) to select a status and print the selected status.
 */

/*
! Input:
! Please enter a number (1 - 2) to select a status: 2

! Output:
! Selected Status: InActive.
*/

#include <stdio.h>
#include <string.h>

// Declare Enum.
enum status
{
    active = 1,
    inactive
};

void welcomeMessageFun();
int gettingNumberFun(int n);
void printStatusFun(int n);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variable.
    int num = 0;

    // Call Functions.
    num = gettingNumberFun(num);
    printStatusFun(num);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Simple Status Program (Version 1) ..\n\n");
}

// Getting number - Function.
int gettingNumberFun(int n)
{
    printf("Please enter a number (1 - 2) to select a status: ");
    scanf("%d", &n);

    return n;
}

// Print status - Function.
void printStatusFun(int n)
{
    if (n >= active && n <= inactive)
    {
        printf("Selected status: ");
        switch (n)
        {
        case active:
            printf("Active.");
            break;

        case inactive:
            printf("InActive.");
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
