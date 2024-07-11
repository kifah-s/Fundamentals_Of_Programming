

//* Three Numbers Program.

//* Write a program that asks the user to enter three numbers and prints the sum of each pair in separate lines.

/*
! Input:
! Enter the first number: 1
! Enter the second number: 3
! Enter the third number: 5

! Output:
! Sum of 1 and 3 is: 4
! Sum of 1 and 5 is: 6
! Sum of 3 and 5 is: 8
*/

#include <stdio.h>

void welcomeMessageFun();

int enterFirstNumberFun(int firNum);
int enterSecondNumberFun(int secNum);
int enterThirdNumberFun(int thiNum);

void sumFirstNumberAndSecondNumberFun(int firNum, int secNum, int sumFirAndSec);
void sumFirstNumberAndThirdNumberFun(int firNum, int thiNum, int sumFirAndThi);
void sumSecondNumberAndThirdNumberFun(int secNum, int thiNum, int sumSecAndThi);

int main()
{
    welcomeMessageFun();

    // Declare variables.
    int firstNumber = 0, secondNumber = 0, thirdNumber = 0;
    int sumFirstAndSecond = 0, sumFirstAndThird = 0, sumSecondAndThird = 0;

    firstNumber = enterFirstNumberFun(firstNumber);
    secondNumber = enterSecondNumberFun(secondNumber);
    thirdNumber = enterThirdNumberFun(thirdNumber);

    sumFirstNumberAndSecondNumberFun( firstNumber,  secondNumber,  sumFirstAndSecond);
    sumFirstNumberAndThirdNumberFun( firstNumber,  thirdNumber,  sumFirstAndThird);
    sumSecondNumberAndThirdNumberFun( secondNumber,  thirdNumber,  sumSecondAndThird);

    printf("\n\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Three Numbers Program ..\n\n");
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

// Sum first Number and second number function.
void sumFirstNumberAndSecondNumberFun(int firNum, int secNum, int sumFirAndSec)
{
    sumFirAndSec = firNum + secNum;
    printf("\nSum of %i and %i is: %i", firNum, secNum, sumFirAndSec);
}

// Sum first Number and third number function.
void sumFirstNumberAndThirdNumberFun(int firNum, int thiNum, int sumFirAndThi)
{
    sumFirAndThi = firNum + thiNum;
    printf("\nSum of %i and %i is: %i", firNum, thiNum, sumFirAndThi);
}

// Sum second Number and third number function.
void sumSecondNumberAndThirdNumberFun(int secNum, int thiNum, int sumSecAndThi)
{
    sumSecAndThi = secNum + thiNum;
    printf("\nSum of %i and %i is: %i", secNum, thiNum, sumSecAndThi);
}

//* End Function ..
