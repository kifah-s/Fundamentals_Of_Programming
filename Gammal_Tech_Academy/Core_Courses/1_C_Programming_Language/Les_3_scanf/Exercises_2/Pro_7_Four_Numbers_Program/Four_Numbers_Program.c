

//* Four Numbers Program.

//* Write a program that asks the user to enter four numbers and prints the sum of the first two numbers in one line and the sum of the next two numbers in another line.

/*
! Input:
! Enter the first number: 3
! Enter the second number: 4
! Enter the third number: 5
! Enter the fourth number: 6

! Output:
! Sum of the first and second number is: 7
! Sum of the third and fourth number is: 11
*/

#include <stdio.h>

void welcomeMessageFun();

int enterFirstNumberFun(int firNum);
int enterSecondNumberFun(int secNum);
int enterThirdNumberFun(int thiNum);
int enterFourthNumberFun(int fouNum);

void sumFirstNumberAndSecondNumberFun(int firNum, int secNum, int sumFirAndSec);
void sumThirdNumberAndFourthNumberFun(int thiNum, int fouNum, int sumThiAndFou);

int main()
{
    welcomeMessageFun();

    // Declare variables.
    int firstNumber = 0, secondNumber = 0, thirdNumber = 0, fourthNumber = 0;
    int sumFirstAndSecond = 0, sumThirdAndFourth = 0;

    firstNumber = enterFirstNumberFun(firstNumber);
    secondNumber = enterSecondNumberFun(secondNumber);
    thirdNumber = enterThirdNumberFun(thirdNumber);
    fourthNumber = enterFourthNumberFun(fourthNumber);

    sumFirstNumberAndSecondNumberFun(firstNumber, secondNumber, sumFirstAndSecond);
    sumThirdNumberAndFourthNumberFun(thirdNumber, fourthNumber, sumThirdAndFourth);

    printf("\n\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Four Numbers Program ..\n\n");
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

// Sum first Number and second number function.
void sumFirstNumberAndSecondNumberFun(int firNum, int secNum, int sumFirAndSec)
{
    sumFirAndSec = firNum + secNum;
    printf("\nSum of the first and second number is: %i", sumFirAndSec);
}

// Sum Third Number and fourth number function.
void sumThirdNumberAndFourthNumberFun(int thiNum, int fouNum, int sumThiAndFou)
{
    sumThiAndFou = thiNum + fouNum;
    printf("\nSum of the third and fourth number is: %i", sumThiAndFou);
}

//* End Function ..
