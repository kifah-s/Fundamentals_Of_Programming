

//* Maximum And Minimum 9 Program (Version 1).

/*
* Write a program that takes two numbers as input and finds the maximum and minimum,
* without using any conditional statements.

! Input:
! Please Enter 2 Numbers:
! Num 1: 3
! Num 2: 9

! Output:
! Maximum Number: 9
! Minimum Number: 3
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int num1, int num2);

int main()
{
    // Declare Variables.
    int number1 = 0, number2 = 0;

    // Call Functions.
    resultFun(number1, number2);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Maximum And Minimum 9 Program (Version 1) ..\n\n");
}

// Get First Number - Function.
int getNum1Fun(int num1)
{
    printf("Please enter 2 numbers: \n");

    printf("num 1: ");
    scanf("%d", &num1);

    return num1;
}

// Get Second Number - Function.
int getNum2Fun(int num2)
{
    printf("num 2: ");
    scanf("%d", &num2);

    return num2;
}

// Check Numbers - Function.
void checkNumbersFun(int num1, int num2)
{
    int sum = num1 + num2;
    int dif = num1 - num2;

    int max = (sum + abs(dif)) / 2;
    int min = (sum - abs(dif)) / 2;

    printf("\nMaximum: %d\n", max);
    printf("Minimum: %d\n\n", min);
}

// Result - Function.
void resultFun(int num1, int num2)
{
    printWelcomeMessageFun();
    num1 = getNum1Fun(num1);
    num2 = getNum2Fun(num2);
    checkNumbersFun(num1, num2);
}
//* End Function ..
