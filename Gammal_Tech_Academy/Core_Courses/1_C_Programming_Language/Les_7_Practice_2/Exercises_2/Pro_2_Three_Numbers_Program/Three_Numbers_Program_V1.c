

//* Three Numbers Program (Version 1).

/*
 * Write a program to handle three input numbers and print the largest among them.
 */

/*
! Input:
! Please enter three numbers ..
! First number: 1
! Second number: 6
! Third number: 2

! Output:
! The larger number is: 6
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingFirstNumberFun(int firNum);
int gettingSecondNumberFun(int secNum);
int gettingThirdNumberFun(int thiNum);
void largerNumberFun(int firNum, int secNum, int thiNum, int larNum);

int main()
{
    welcomeMessageFun();

    // Declare Variables.
    int firstNumber = 0, secondNumber = 0, thirdNumber = 0, largerNumber = 0;

    firstNumber = gettingFirstNumberFun(firstNumber);
    secondNumber = gettingSecondNumberFun(secondNumber);
    thirdNumber = gettingThirdNumberFun(thirdNumber);

    largerNumberFun(firstNumber, secondNumber, thirdNumber, largerNumber);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Three Numbers Program (Version 1) ..\n\n");
}

// Getting First number function.
int gettingFirstNumberFun(int firNum)
{
    printf("Please enter Three numbers ..\n");
    printf("First number: ");
    scanf("%i", &firNum);

    return firNum;
}

// Getting Second number function.
int gettingSecondNumberFun(int secNum)
{
    printf("Second number: ");
    scanf("%i", &secNum);

    return secNum;
}

// Getting Third number function.
int gettingThirdNumberFun(int thiNum)
{
    printf("Third number: ");
    scanf("%i", &thiNum);

    return thiNum;
}

// Larger number function.
void largerNumberFun(int firNum, int secNum, int thiNum, int larNum)
{
    if (firNum > secNum && firNum > thiNum)
    {
        larNum = firNum;
    }
    else if (secNum > firNum && secNum > thiNum)
    {
        larNum = secNum;
    }
    else
    {
        larNum = thiNum;
    }

    printf("\nThe larger number is: %i", larNum);
}
//* End Function ..
