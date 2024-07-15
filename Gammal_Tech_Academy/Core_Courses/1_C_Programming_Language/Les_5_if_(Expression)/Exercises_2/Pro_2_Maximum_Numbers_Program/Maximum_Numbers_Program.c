

//* Maximum Numbers Program.

//* Write a program that asks the user to enter two numbers and then prints the maximum of those two numbers.

/*
! Input:
! Enter first number: 5
! Enter second number: 9

! Output:
! The maximum number is: 9.
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingFirstNumberFun(int firNum);
int gettingSecondNumberFun(int secNum);
void MaximumNumbersFun(int firNum, int secNum);

int main()
{
    welcomeMessageFun();

    // Declare variables.
    int firstNumber = 0, secondNumber = 0;

    firstNumber = gettingFirstNumberFun(firstNumber);
    secondNumber = gettingSecondNumberFun(secondNumber);
    MaximumNumbersFun(firstNumber, secondNumber);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Maximum Numbers Program ..\n\n");
}

// Getting First number function.
int gettingFirstNumberFun(int firNum)
{
    printf("Please enter a first number: ");
    scanf("%i", &firNum);

    return firNum;
}

// Getting Second number function.
int gettingSecondNumberFun(int secNum)
{
    printf("Please enter a Second number: ");
    scanf("%i", &secNum);

    return secNum;
}

// Maximum Numbers function.
void MaximumNumbersFun(int firNum, int secNum)
{
    if (firNum > secNum)
    {
        printf("\nThe maximum number is: %i.", firNum);
    }
    else
    {
        printf("\nThe maximum number is: %i.", secNum);
    }
}
//* End Function ..
