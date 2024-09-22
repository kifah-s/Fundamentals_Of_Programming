

//* Swap Two Numbers Using Pointers 2 Program (Version 1).

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
int gettingFirstNumberFun(int firNum);
int gettingSecondNumberFun(int secNum);
void printNumbersBeforSwappingFun(int firNum, int secNum);
void swapTwoNumberFun(int *firPoi, int *secPoi);
void printNumbersAfterSwappingFun(int firNum, int secNum);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int firstNumber = 0, secondNumber = 0;

    // Calling Functions.
    firstNumber = gettingFirstNumberFun(firstNumber);
    secondNumber = gettingSecondNumberFun(secondNumber);
    printNumbersBeforSwappingFun(firstNumber, secondNumber);

    // Declare Pointers.
    int *firstPointer = &firstNumber;
    int *secondPointer = &secondNumber;

    // Calling Functions.
    swapTwoNumberFun(firstPointer, secondPointer);
    printNumbersAfterSwappingFun(firstNumber, secondNumber);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Swap Two Numbers Using Pointers 2 Program (Version 1) ..\n\n");
}

// Getting first number - Function.
int gettingFirstNumberFun(int firNum)
{
    printf("Please enter the first number: ");
    scanf("%d", &firNum);

    return firNum;
}

// Getting second number - Function.
int gettingSecondNumberFun(int secNum)
{
    printf("Please enter the Second number: ");
    scanf("%d", &secNum);

    return secNum;
}

// Print numbers befor swapping - Function.
void printNumbersBeforSwappingFun(int firNum, int secNum)
{
    printf("\nNumbers Befor swapping:\n");
    printf("First Number: %d\n", firNum);
    printf("Second Number: %d\n", secNum);
}

// Swap two numbers - Function.
void swapTwoNumberFun(int *firPoi, int *secPoi)
{
    int switchNum = *firPoi;
    *firPoi = *secPoi;
    *secPoi = switchNum;
}

// Print numbers after swapping - Function.
void printNumbersAfterSwappingFun(int firNum, int secNum)
{
    printf("\nNumbers after swapping:\n");
    printf("First Number: %d\n", firNum);
    printf("Second Number: %d\n", secNum);
}

//* End Function ..
