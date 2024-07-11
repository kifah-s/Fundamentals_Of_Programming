

//* Result Multiply Program.

//* Write a program that asks the user to enter two numbers and prints the result of multiplying them.

/*
! Input:
! Enter the first number: 5
! Enter the second number: 2

! Output:
! The product of the tow numbers is: 10
*/

#include <stdio.h>

void welcomeMessageFun();
int enterFirstNumberFun(int firNum);
int enterSecondNumberFun(int secNum);
void resultMultiplyFun(int firNum, int secNum, int mul);

int main()
{
    welcomeMessageFun();

    // Declare variables.
    int firstNumber = 0, secondNumber = 0, resultMultiply = 0;

    firstNumber = enterFirstNumberFun(firstNumber);
    secondNumber = enterSecondNumberFun(secondNumber);
    resultMultiplyFun( firstNumber,  secondNumber,  resultMultiply);

    printf("\n\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Result Multiply Program ..\n\n");
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

// Result Multiply function.
void resultMultiplyFun(int firNum, int secNum, int mul)
{
    mul = firNum * secNum;

    printf("\nThe product of the tow numbers is: %i", mul);
}
//* End Function ..
