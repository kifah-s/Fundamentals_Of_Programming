

//* Between 1 And 3 Program (Version 1).

/*
 * Write a program that asks the user to enter a number between 1 and 3,
 * Depending on the entered number, the program should perform the following tasks:
 * If the number is 1, print "You selected option 1."
 * If the number is 2, print "You selected option 2."
 * If the number is 3, print "You selected option 3."
 * If the entered number is not 1, 2, or 3, print "Invalid choice."
 */

/*
! Input:
! Enter a number (1 To 3): 1

! Output:
! You selected option 1.
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingNumberFun(int num);
void between1And3Fun(int num);


int main()
{
    // Declare Variables.
    int number = 0;

    between1And3Fun(number);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Between 1 And 3 Program (Version 1) ..\n\n");
}

// Getting Number - Function.
int gettingNumberFun(int num)
{
    printf("Enter a number (1 To 3): ");
    scanf("%i", &num);

    return num;
}

// Between 1 And 3 - Function.
void between1And3Fun(int num)
{
    welcomeMessageFun();

    num = gettingNumberFun(num);

    switch (num)
    {
    case 1:
        printf("\nYou selected option 1.");
        break;

    case 2:
        printf("\nYou selected option 2.");
        break;

    case 3:
        printf("\nYou selected option 3.");
        break;

    default:
        printf("\nInvalid choice.");
        break;
    }
}
//* End Function ..
