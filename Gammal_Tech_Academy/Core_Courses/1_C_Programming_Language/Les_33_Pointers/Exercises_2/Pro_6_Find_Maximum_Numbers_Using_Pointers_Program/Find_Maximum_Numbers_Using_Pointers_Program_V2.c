

//* Find Maximum of Two Numbers Using Pointers Program (Version 2).

/*
 * Program to Find the Maximum of Two Numbers using Pointers.
 */

/*
! Input:
! Please enter the first number: 5
! Please enter the second number: 6

! Output:
! Maximum: 6
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int firstNumber = 0, secondNumber = 0, maximumNumber = 0;

    // Declare Pointers.
    int *firstPointer, *secondPointer, *maximumPointer;

    printf("Please enter the first number: ");
    scanf("%d", &firstNumber);

    printf("Please enter the Second number: ");
    scanf("%d", &secondNumber);

    firstPointer = &firstNumber;
    secondPointer = &secondNumber;
    maximumPointer = &maximumNumber;

    if (*firstPointer > *secondPointer)
    {
        maximumPointer = firstPointer;
    }
    else
    {
        maximumPointer = secondPointer;
    }

    printf("\nMaximum: %d", *maximumPointer);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Find Maximum of Two Numbers Using Pointers Program (Version 2) ..\n\n");
}

//* End Function ..
