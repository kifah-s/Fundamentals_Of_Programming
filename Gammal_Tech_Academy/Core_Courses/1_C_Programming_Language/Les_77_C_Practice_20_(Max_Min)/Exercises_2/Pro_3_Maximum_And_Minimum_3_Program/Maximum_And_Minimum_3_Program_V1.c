

//* Maximum And Minimum 3 Program (Version 1).

/*
* Write a program that takes user input for three numbers and finds the maximum and minimum among them.

! Output:
! Maximum Number: 7
! Minimum Number: 4
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int num1, int num2, int num3, int max, int min);

int main()
{
    // Declare Variables.
    int firstNumber = 0, secondNumber = 0, thirdNumber = 0, maximumNumber = 0, minimumNumber = 0;

    // Call Functions.
    resultFun(firstNumber, secondNumber, thirdNumber, maximumNumber, minimumNumber);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Maximum And Minimum 3 Program (Version 1) ..\n\n");
}

// Get Num1 - Function.
int getNum1Fun(int num1)
{
    printf("Please enter the first number: ");
    scanf("%d", &num1);

    return num1;
}

// Get Num2 - Function.
int getNum2Fun(int num2)
{
    printf("Please enter the second number: ");
    scanf("%d", &num2);

    return num2;
}

// Get Num3 - Function.
int getNum3Fun(int num3)
{
    printf("Please enter the third number: ");
    scanf("%d", &num3);

    return num3;
}

// Find Maximum Number - Function.
int findMaximumNumberFun(int num1, int num2, int num3, int max)
{
    if (num1 > num2 && num1 > num3)
    {
        max = num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        max = num2;
    }
    else
    {
        max = num3;
    }

    return max;
}

// Find Minimum Number - Function.
int findMinimumNumberFun(int num1, int num2, int num3, int min)
{
    if (num1 < num2 && num1 < num3)
    {
        min = num1;
    }
    else if (num2 < num1 && num2 < num3)
    {
        min = num1;
    }
    else
    {
        min = num3;
    }

    return min;
}

// Result - Function.
void resultFun(int num1, int num2, int num3, int max, int min)
{
    printWelcomeMessageFun();

    num1 = getNum1Fun(num1);
    num2 = getNum2Fun(num2);
    num3 = getNum3Fun(num3);
    max = findMaximumNumberFun(num1, num2, num3, max);
    min = findMinimumNumberFun(num1, num2, num3, min);

    printf("\nMaximum Number: %d\n", max);
    printf("Minimum Number: %d\n\n", min);
}
//* End Function ..
