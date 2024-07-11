

//* Sum And multiply Program.

//* Write a program that asks the user to enter three numbers and prints the addition of the first two numbers and then multiplying them by the third number.

/*
! Input:
! Enter the first number: 3
! Enter the second number: 2
! Enter the third number: 5

! Output:
! The product the some of the first and second numbers and the third number is: 25
*/

#include <stdio.h>

void welcomeMessageFun();

int enterFirstNumberFun(int firNum);
int enterSecondNumberFun(int secNum);
int enterThirdNumberFun(int thiNum);

void sumAndMultiplyFun(int firNum, int secNum, int thiNum, int sumAndMul);

int main()
{
    welcomeMessageFun();

    // Declare variables.
    int firstNumber = 0, secondNumber = 0, thirdNumber = 0;
    int sumAndMultiply = 0;

    firstNumber = enterFirstNumberFun(firstNumber);
    secondNumber = enterSecondNumberFun(secondNumber);
    thirdNumber = enterThirdNumberFun(thirdNumber);

    sumAndMultiplyFun(firstNumber, secondNumber, thirdNumber, sumAndMultiply);

    printf("\n\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum And multiply Program ..\n\n");
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

// Enter Third number function.
int enterThirdNumberFun(int thiNum)
{
    printf("Please enter the Third number: ");
    scanf("%i", &thiNum);

    return thiNum;
}

// Sum and multiply function.
void sumAndMultiplyFun(int firNum, int secNum, int thiNum, int sumAndMul)
{
    sumAndMul = (firNum + secNum) * thiNum;
    printf("\nThe product the some of the first and second numbers and the third number is: %i", sumAndMul);
}
//* End Function ..
