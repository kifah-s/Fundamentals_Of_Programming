

//* Remainder Of Division Program (Version 1).

/*
 * Calculate the remainder of division of two numbers.
 */

/*
! Input:
! Please enter a first number: 3
! Please enter a second number: 2

! Output:
! Remainder Of Division = 1
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int gettingFirstNumberFun(int firNum);
int gettingSecondNumberFun(int secNum);
int calculateRemainderOfDivisionFun(int firNum, int secNum, int remOfDiv);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int firstNumber = 0, secondNumber = 0, remainderOfDivision = 0;

    // Call Function.
    firstNumber = gettingFirstNumberFun(firstNumber);
    secondNumber = gettingSecondNumberFun(secondNumber);
    remainderOfDivision = calculateRemainderOfDivisionFun(firstNumber, secondNumber, remainderOfDivision);

    // Print Result.
    printf("\nRemainder Of Division: %d", remainderOfDivision);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Remainder Of Division Program (Version 1) ..\n\n");
}

// Getting first Number - Function.
int gettingFirstNumberFun(int firNum)
{
    printf("Please enter a first number: ");
    scanf("%d", &firNum);

    return firNum;
}

// Getting second Number - Function.
int gettingSecondNumberFun(int secNum)
{
    printf("Please enter a second number: ");
    scanf("%d", &secNum);

    return secNum;
}

// Calculate Remainder Of Division - Function.
int calculateRemainderOfDivisionFun(int firNum, int secNum, int remOfDiv)
{
    // remOfDiv = firNum % secNum;
    remOfDiv = fmod(firNum, secNum);

    return remOfDiv;
}
//* End Function ..
