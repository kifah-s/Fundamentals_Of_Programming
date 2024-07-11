

//* Subtracting First Number Program.

//* Write a program that asks the user to enter two numbers and prints the result of subtracting the first number from the second.

/*
! Input:
! Enter the first number: 7
! Enter the second number: 2

! Output:
! The difference between the tow numbers is: 5
*/

#include <stdio.h>

void welcomeMessageFun();
int enterFirstNumberFun(int firNum);
int enterSecondNumberFun(int secNum);
void subtractingFirstNumberFun(int firNum, int secNum, int diff);

int main()
{
    welcomeMessageFun();

    // Declare variables.
    int firstNumber = 0, secondNumber = 0, difference = 0;

    firstNumber = enterFirstNumberFun(firstNumber);
    secondNumber = enterSecondNumberFun(secondNumber);
    subtractingFirstNumberFun(firstNumber, secondNumber, difference);

    printf("\n\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Subtracting First Number Program ..\n\n");
}

// Enter first number function.
int enterFirstNumberFun(int firNum)
{
    printf("Please enter the first number: ");
    scanf("%i", &firNum);

    return firNum;
}

// Enter second number function.
int enterSecondNumberFun(int secNum)
{
    printf("Please enter the second number: ");
    scanf("%i", &secNum);

    return secNum;
}

// Subtracting First Number function.
void subtractingFirstNumberFun(int firNum, int secNum, int diff)
{
    diff = firNum - secNum;

    printf("\nThe difference between the tow numbers is: %i", diff);
}
//* End Function ..
