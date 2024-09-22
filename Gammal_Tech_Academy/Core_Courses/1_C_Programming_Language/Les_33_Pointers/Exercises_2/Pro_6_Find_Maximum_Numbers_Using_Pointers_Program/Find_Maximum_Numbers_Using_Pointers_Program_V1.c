

//* Find Maximum of Two Numbers Using Pointers Program (Version 1).

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
int gettingFirstNumberFun(int firNum);
int gettingSecondNumberFun(int secNum);
int *findMaximumOfTwoNumbersFun(int *firPoi, int *secPoi, int *maxPoi);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int firstNumber = 0, secondNumber = 0, maximumNumber = 0;

    // Declare Pointers.
    int *firstPointer, *secondPointer, *maximumPointer;

    // Calling Functions.
    firstNumber = gettingFirstNumberFun(firstNumber);
    secondNumber = gettingSecondNumberFun(secondNumber);

    firstPointer = &firstNumber;
    secondPointer = &secondNumber;
    maximumPointer = &maximumNumber;

    maximumPointer = findMaximumOfTwoNumbersFun(firstPointer, secondPointer, maximumPointer);

    printf("\nMaximum: %d", *maximumPointer);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Find Maximum of Two Numbers Using Pointers Program (Version 1) ..\n\n");
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

// Find maximum of two numbers - Function.
int *findMaximumOfTwoNumbersFun(int *firPoi, int *secPoi, int *maxPoi)
{
    if (*firPoi > *secPoi)
    {
        return firPoi;
    }
    else
    {
        return secPoi;
    }
}

//* End Function ..
