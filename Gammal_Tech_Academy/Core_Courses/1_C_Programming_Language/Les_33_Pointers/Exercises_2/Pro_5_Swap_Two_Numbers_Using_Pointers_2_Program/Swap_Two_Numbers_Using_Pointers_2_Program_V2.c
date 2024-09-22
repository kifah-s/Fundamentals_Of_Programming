

//* Swap Two Numbers Using Pointers 2 Program (Version 2).

/*
 * Program to Swap Two Numbers Using Pointers.
 */

/*
! Input:
! Please enter the first number: 5
! Please enter the second number: 9

! Output:
! Befor swapping:
! First number: 5
! Second number: 9

! After swapping:
! First number: 9
! Second number: 5
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int firstNumber = 0, secondNumber = 0;

    // Declare Pointers.
    int *firstPointer, *secondPointer;

    // Getting Numbers.
    printf("Please enter the first number: ");
    scanf("%d", &firstNumber);

    printf("Please enter the second number: ");
    scanf("%d", &secondNumber);

    // Print numbers befor swapping.
    printf("\nNumbers befor swapping:\n");
    printf("First numer: %d\n", firstNumber);
    printf("Second numer: %d\n", secondNumber);

    firstPointer = &firstNumber;
    secondPointer = &secondNumber;

    int switchNum = *firstPointer;
    *firstPointer = *secondPointer;
    *secondPointer = switchNum;

    // Print numbers after swapping.
    printf("\nNumbers after swapping:\n");
    printf("First numer: %d\n", firstNumber);
    printf("Second numer: %d\n", secondNumber);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Swap Two Numbers Using Pointers 2 Program (Version 2) ..\n\n");
}
//* End Function ..
