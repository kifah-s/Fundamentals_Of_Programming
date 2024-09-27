

//* Traffic Signal Colors Program (Version 1).

/*
 * Create a program that uses an enumeration for simple
 * traffic signal colors (Red, Yellow, and Green). Prompt the
 * user to enter a number (1-3) to select a traffic signal color
 * and print the selected color.
 */

/*
! Input:
! Please enter a number (1 - 3) to select a Traffic Signal Colors: 2

! Output:
! Selected Traffic Signal Colors: Yellow.
*/

#include <stdio.h>
#include <string.h>

// Declare Enum.
enum trafficSignalColors
{
    Red = 1,
    Yellow,
    Green
};

void welcomeMessageFun();
int gettingNumberFun(int n);
void printTrafficSignalColorsFun(int n);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variable.
    int num = 0;

    // Call Functions.
    num = gettingNumberFun(num);
    printTrafficSignalColorsFun(num);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Traffic Signal Colors Program (Version 1) ..\n\n");
}

// Getting number - Function.
int gettingNumberFun(int n)
{
    printf("Please enter a number (1 - 4) to select a Traffic Signal Colors: ");
    scanf("%d", &n);

    return n;
}

// Print Traffic Signal Colors - Function.
void printTrafficSignalColorsFun(int n)
{
    if (n >= Red && n <= Green)
    {
        printf("Selected Traffic Signal Colors: ");
        switch (n)
        {
        case Red:
            printf("Red.");
            break;

        case Yellow:
            printf("Yellow.");
            break;

        case Green:
            printf("Green.");
            break;

        default:
            break;
        }
    }
    else
    {
        printf("Invalid input, please enter a number between 1 and 4.");
    }
}
//* End Function ..
