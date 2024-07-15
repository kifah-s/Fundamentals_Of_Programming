

//* Take The Stairs Program.

/*
 * Write a program that asks the user to enter a number,
 * If the number is 1, print "Take the stairs",
 * otherwise, print "Take the elevator".
 */

/*
! Input:
! Enter the floor number: 1

! Output:
! "Take the stairs".
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingNumberFun(int n);
void takeStairsOrNotFunction(int n);

int main()
{
    welcomeMessageFun();

    // Declare variables.
    int number = 0;

    number = gettingNumberFun(number);
    takeStairsOrNotFunction(number);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Take the stairs Program ..\n\n");
}

// Getting number function.
int gettingNumberFun(int n)
{
    printf("Please Enter the floor number: ");
    scanf("%i", &n);

    return n;
}

// Take the stairs Or not function.
void takeStairsOrNotFunction(int n)
{
    if (n == 1)
    {
        printf("\n\"Take the stairs.\"");
    }
    else
    {
        printf("\n\"Take the elevator.\"");
    }
}
//* End Function ..
