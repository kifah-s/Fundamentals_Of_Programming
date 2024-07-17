

//* Two Numbers Program (Version 1).

/*
 * Write a program that prompts the user to input two numbers,
 * If the second number is smaller than the first,
 * the program should swap the two numbers using a temporary variable,
 * Otherwise, it should print "Hello" five times.
 */

/*
! Input:
! Please enter the first number: 7
! Please enter the second number: 4

! Output:
! first: 4
! second: 7
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingFirstNumberFun(int firNum);
int gettingSecondNumberFun(int secNum);
void checkNumberFun(int firNum, int secNum);

int main()
{
    welcomeMessageFun();

    // Declare Variables.
    int firstNumber = 0, secondNumber = 0;

    firstNumber = gettingFirstNumberFun(firstNumber);
    secondNumber = gettingSecondNumberFun(secondNumber);
    checkNumberFun(firstNumber, secondNumber);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Two Numbers Program (Version 1) ..\n\n");
}

// Getting first number function.
int gettingFirstNumberFun(int firNum)
{
    printf("Please enter the first number: ");
    scanf("%i", &firNum);

    return firNum;
}

// Getting Second number function.
int gettingSecondNumberFun(int secNum)
{
    printf("Please enter the Second number: ");
    scanf("%i", &secNum);

    return secNum;
}

// Check Number function.
void checkNumberFun(int firNum, int secNum)
{
    int swap = 0;

    if (secNum < firNum)
    {
        swap = firNum;
        firNum = secNum;
        secNum = swap;

        printf("\nFirst: %i", firNum);
        printf("\nSecond: %i", secNum);
    }
    else
    {
        for (int i = 0; i < 5; i++)
        {
            printf("\nHello");
        }
    }
}
//* End Function ..
