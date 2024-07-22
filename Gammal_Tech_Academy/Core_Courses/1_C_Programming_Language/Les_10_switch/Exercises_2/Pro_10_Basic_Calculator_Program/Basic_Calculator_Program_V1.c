

//* Basic Calculator Program (Version 1).

/*
 * Write a program to create a basic calculator,
 * The program should prompt the user to enter two numbers and a choice of operation. The choices are:
 * Addition
 * Subtraction
 * Multiplication
 * Division
 */

/*
! Input:
! Please enter a first number: 5
! Please enter a second number: 6

! Choose Operation:
! 1. Addition
! 2. Subtraction
! 3. Multiplication
! 4. Division

! Please enter your choice: 1

! Output:
! Result 5 + 6 = 16
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingFirstNumberFun(int firNum);
int gettingSecondNumberFun(int secNum);
int chooseOperationFun();
void additionFun(int firNum, int secNum);
void subtractionFun(int firNum, int secNum);
void multiplicationFun(int firNum, int secNum);
void divisionFun(int firNum, int secNum);
void basicCalculatorFun(int firNum, int secNum);

int main()
{
    welcomeMessageFun();

    // Declare Variables.
    int firstNumber = 0, secondNumber = 0;

    basicCalculatorFun(firstNumber, secondNumber);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Basic Calculator Program (Version 1) ..\n\n");
}

// Getting First Number - Function.
int gettingFirstNumberFun(int firNum)
{
    printf("Please enter a First number: ");
    scanf("%i", &firNum);

    return firNum;
}

// Getting Second Number - Function.
int gettingSecondNumberFun(int secNum)
{
    printf("Please enter a Second number: ");
    scanf("%i", &secNum);

    return secNum;
}

// Choose Operation - Function.
int chooseOperationFun()
{
    int cho = 0;

    printf("\nChoose Operation:\n");
    printf("1. Addition.\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n\n");
    printf("Please enter your choice: ");

    scanf("%i", &cho);

    return cho;
}

// Addition - Function.
void additionFun(int firNum, int secNum)
{
    int additionResult = firNum + secNum;
    printf("\nResult %i + %i = %i", firNum, secNum, additionResult);
}

// Subtraction - Function.
void subtractionFun(int firNum, int secNum)
{
    int subtractionResult = firNum - secNum;
    printf("\nResult %i - %i = %i", firNum, secNum, subtractionResult);
}

// Multiplication - Function.
void multiplicationFun(int firNum, int secNum)
{
    int multiplicationResult = firNum * secNum;
    printf("\nResult %i * %i = %i", firNum, secNum, multiplicationResult);
}

// Division - Function.
void divisionFun(int firNum, int secNum)
{
    if (secNum != 0)
    {
        int divisionResult = firNum / secNum;
        printf("\nResult %i / %i = %i", firNum, secNum, divisionResult);
    }
    else
    {
        printf("\nError: Division by zero is undefined.");
    }
}

// Basic Calculator - Function.
void basicCalculatorFun(int firNum, int secNum)
{
    firNum = gettingFirstNumberFun(firNum);
    secNum = gettingSecondNumberFun(secNum);

    int cho = chooseOperationFun(cho);

    switch (cho)
    {
    case 1:
        additionFun(firNum, secNum);
        break;

    case 2:
        subtractionFun(firNum, secNum);
        break;

    case 3:
        multiplicationFun(firNum, secNum);
        break;

    case 4:
        divisionFun(firNum, secNum);
        break;

    default:
        printf("\nInvalid choice, Please enter a number between 1 and 4.\n");
    }
}
//* End Function ..
