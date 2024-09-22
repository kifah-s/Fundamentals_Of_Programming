

//* Calculate Sum Using Pointers Program (Version 1).

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
int gettingFirstNumberFun(int firNum);
int gettingSecondNumberFun(int secNum);
int calculateSumNumbersFun(int *firPoi, int *secPoi, int sum);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    int firstNumber = 0, secondNumber = 0, sum = 0;

    // Declare Pointers
    int *firstPointer, *secondPointer;

    // Call functions.
    firstNumber = gettingFirstNumberFun(firstNumber);
    secondNumber = gettingSecondNumberFun(secondNumber);

    firstPointer = &firstNumber;
    secondPointer = &secondNumber;

    sum = calculateSumNumbersFun(firstPointer, secondPointer, sum);

    printf("\nSum of %d and %d is: %d", *firstPointer, *secondPointer, sum);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Calculate Sum Using Pointers Program (Version 1) ..\n\n");
}

// Getting first number - Function.
int gettingFirstNumberFun(int firNum)
{
    printf("Please enter a first number: ");
    scanf("%d", &firNum);

    return firNum;
}

// Getting second number - Function.
int gettingSecondNumberFun(int secNum)
{
    printf("Please enter a second number: ");
    scanf("%d", &secNum);

    return secNum;
}

// Calculate sum numbers - Function.
int calculateSumNumbersFun(int *firPoi, int *secPoi, int sum)
{
    sum = *firPoi + *secPoi;

    return sum;
}

//* End Function ..
