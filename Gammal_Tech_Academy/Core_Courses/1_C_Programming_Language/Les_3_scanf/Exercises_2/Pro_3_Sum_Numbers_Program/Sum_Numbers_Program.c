

//* Sum Numbers Program.

//* Write a program that asks the user to enter two numbers and prints the sum.

/*
! Input:
! Enter the first number: 2
! Enter the second number: 5

! Output:
! The sum of the tow numbers is: 7
*/

#include <stdio.h>

void welcomeMessageFun();
int enterFirstNumberFun(int firNum);
int enterSecondNumberFun(int secNum);
void sumNumbersFun(int firNum, int secNum, int sum);

int main()
{
    welcomeMessageFun();

    // Declare variables.
    int firstNumber = 0, secondNumber = 0, sum = 0;

    firstNumber = enterFirstNumberFun(firstNumber);
    secondNumber = enterSecondNumberFun(secondNumber);
    sumNumbersFun(firstNumber, secondNumber, sum);

    printf("\n\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum Numbers Program ..\n\n");
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

// sum numbers function.
void sumNumbersFun(int firNum, int secNum, int sum)
{
    sum = firNum + secNum;

    printf("\nThe Sum of the tow numbers is: %i", sum);
}
//* End Function ..
