

//* Two Numbers 2 Program (Version 1).

/*
 * Write a program The program should prompt the user to input two numbers,
 * If the second number is smaller than the first, the program should swap the two numbers using a temporary variable,
 * If the second number is greater than the first, it should calculate the product of the two numbers,
 * If both numbers are equal, it should print "Numbers are equal."
 */

/*
! Input:
! Please enter the first number: 4
! Please enter the second number: 7

! Output:
! Product of the number: 28
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
    printf("\n\nYou welcome in Two Numbers 2 Program (Version 1) ..\n\n");
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
    int swap = 0, sumProduct = 0;

    if (secNum < firNum)
    {
        swap = firNum;
        firNum = secNum;
        secNum = swap;

        printf("\nFirst: %i", firNum);
        printf("\nSecond: %i", secNum);
    }
    else if (secNum > firNum)
    {
        sumProduct = firNum * secNum;
        printf("\nProduct of the number: %i", sumProduct);
    }
    else
    {
        printf("\nNumbers are equal");
    }
}
//* End Function ..
