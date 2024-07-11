

//* Five Numbers Program.

//* Write a program that asks the user to enter five numbers and prints their sum.

/*
! Input:
! Enter the first number: 1
! Enter the second number: 2
! Enter the third number: 3
! Enter the fourth number: 4
! Enter the five number: 5

! Output:
! The Sum of the five numbers is: 15
*/

#include <stdio.h>

void welcomeMessageFun();

int enterFirstNumberFun(int firNum);
int enterSecondNumberFun(int secNum);
int enterThirdNumberFun(int thiNum);
int enterFourthNumberFun(int fouNum);
int enterFiveNumberFun(int fivNum);

void sumNumbersFun(int firNum, int secNum, int thiNum, int fouNum, int fivNum, int sumNum);

int main()
{
    welcomeMessageFun();

    // Declare variables.
    int firstNumber = 0, secondNumber = 0, thirdNumber = 0, fourthNumber = 0, fiveNumber = 0, sumNumbers = 0;

    firstNumber = enterFirstNumberFun(firstNumber);
    secondNumber = enterSecondNumberFun(secondNumber);
    thirdNumber = enterThirdNumberFun(thirdNumber);
    fourthNumber = enterFourthNumberFun(fourthNumber);
    fiveNumber = enterFiveNumberFun(fiveNumber);

    sumNumbersFun(firstNumber, secondNumber, thirdNumber, fourthNumber, fiveNumber, sumNumbers);

    printf("\n\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Five Numbers Program ..\n\n");
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

// Enter Fourth number function.
int enterFourthNumberFun(int fouNum)
{
    printf("Please enter the Fourth number: ");
    scanf("%i", &fouNum);

    return fouNum;
}

// Enter Five number function.
int enterFiveNumberFun(int fivNum)
{
    printf("Please enter the Five number: ");
    scanf("%i", &fivNum);

    return fivNum;
}

// Sum numbers function.
void sumNumbersFun(int firNum, int secNum, int thiNum, int fouNum, int fivNum, int sumNum)
{
    sumNum = firNum + secNum + thiNum + fouNum + fivNum;
    printf("\nThe Sum of the five numbers is: %i", sumNum);
}

//* End Function ..
