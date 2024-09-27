

//* Simple Directions Program (Version 1).

/*
 * Create a program that uses an enumeration for simple
 * directions (Up, Down, Left, and Right). Prompt the user to
 * enter a number (1-4) to select a direction and print the selected direction.
 */

/*
! Input:
! Please enter a number (1 - 4) to select a direction: 2

! Output:
! Selected direction: Up.
*/

#include <stdio.h>
#include <string.h>

// Declare Enum.
enum directions
{
    up = 1,
    down,
    left,
    right
};

void welcomeMessageFun();
int gettingNumberFun(int n);
void printDirectionFun(int n);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variable.
    int num = 0;

    // Call Functions.
    num = gettingNumberFun(num);
    printDirectionFun(num);


    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Simple Directions Program (Version 1) ..\n\n");
}

// Getting number - Function.
int gettingNumberFun(int n)
{
    printf("Please enter a number (1 - 4) to select a direction: ");
    scanf("%d", &n);

    return n;
}

// Print direction - Function.
void printDirectionFun(int n)
{
    if (n >= up && n <= down)
    {
        printf("Selected direction: ");
        switch (n)
        {
        case up:
            printf("Up.");
            break;

        case down:
            printf("Down.");
            break;

        case left:
            printf("Left.");
            break;

        case right:
            printf("Right.");
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
