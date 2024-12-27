

//* Find Max Program (Version 1).

/*
* Create a program with a function findMax that takes three integers as input and returns the maximum among them.
* In the main function, take three integers as input, call the findMax function, and print the maximum value.

! Input:
! Please enter a first number: 6
! Please enter a second number: 5
! Please enter a three number: 9

! Output:
! Maxim number is: 9
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int num1, int num2, int num3, int max);

int main()
{
    // Declare Variables.
    int num1 = 0, num2 = 0, num3 = 0, maximNumber = 0;

    // Call Functions.
    resultFun(num1, num2, num3, maximNumber);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Find Max Program (Version 1) ..\n\n");
}

// Get First Number - Function.
int getFirstNumberFun(int num1)
{
    printf("Please enter a First number: ");
    scanf("%d", &num1);

    return num1;
}

// Get Second Number - Function.
int getSecondNumberFun(int num2)
{
    printf("Please enter a Second number: ");
    scanf("%d", &num2);

    return num2;
}

// Get Three Number - Function.
int getThreeNumberFun(int num3)
{
    printf("Please enter a Three number: ");
    scanf("%d", &num3);

    return num3;
}

// Check Maxim Number - Function.
int checkMaximNumberFun(int num1, int num2, int num3, int max)
{
    if (num1 > num2 && num1 > num3)
    {
        max = num1;
        // return num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        max = num2;
        // return num2;
    }
    else
    {
        max = num3;
        // return num3;
    }

    return max;
}

// Result - Function.
void resultFun(int num1, int num2, int num3, int max)
{
    printWelcomeMessageFun();
    num1 = getFirstNumberFun(num1);
    num2 = getSecondNumberFun(num2);
    num3 = getThreeNumberFun(num3);
    max = checkMaximNumberFun(num1, num2, num3, max);

    printf("\nMaxim number is: %d\n\n", max);
}
//* End Function ..
