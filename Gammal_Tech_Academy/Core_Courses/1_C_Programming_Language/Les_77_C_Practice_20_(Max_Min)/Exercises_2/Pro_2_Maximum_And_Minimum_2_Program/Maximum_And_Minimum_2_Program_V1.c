

//* Maximum And Minimum 2 Program (Version 1).

/*
* Write a program to find the maximum and minimum of two numbers using a function.

! Output:
! Maximum Number: 7
! Minimum Number: 4
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int a, int b);

int main()
{
    // Declare Variables.
    int firstNumber = 7, secondNumber = 4;

    // Call Functions.
    resultFun(firstNumber, secondNumber);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Maximum And Minimum 2 Program (Version 1) ..\n\n");
}

// Find Maximum Number - Function.
int findMaximumNumberFun(int a, int b)
{
    return (a > b) ? a : b;
}

// Find Minimum Number - Function.
int findMinimumNumberFun(int a, int b)
{
    return (a < b) ? a : b;
}

// Result - Function.
void resultFun(int a, int b)
{
    printWelcomeMessageFun();

    printf("Maximum Element: %d\n", findMaximumNumberFun(a, b));
    printf("Minimum Element: %d\n\n", findMinimumNumberFun(a, b));
}
//* End Function ..
