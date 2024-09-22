

//* Calculate Sum Using Pointers Program (Version 2).

/*
 * Program to Calculate the Sum of Two Numbers using Pointers.
 */

/*
! Input:
! Please enter first number: 5
! Please enter second number: 7

! Output:
! Sum of 5 and 7 is: 12
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    int firstNumber = 0, secondNumber = 0, sum = 0;

    // Declare Pointers
    int *firstPointer, *secondPointer;

    printf("Please enter a first number: ");
    scanf("%d", &firstNumber);

    printf("Please enter a second number: ");
    scanf("%d", &secondNumber);

    firstPointer = &firstNumber;
    secondPointer = &secondNumber;

    sum = *firstPointer + *secondPointer;

    printf("\nSum of %d and %d is: %d", *firstPointer, *secondPointer, sum);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Calculate Sum Using Pointers Program (Version 2) ..\n\n");
}

//* End Function ..
