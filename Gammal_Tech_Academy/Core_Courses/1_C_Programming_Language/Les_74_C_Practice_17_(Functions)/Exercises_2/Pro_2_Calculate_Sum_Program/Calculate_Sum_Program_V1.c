

//* Calculate Sum Program (Version 1).

/*
* Create a program with a function calculateSum that takes two integers as input and returns their sum,
* In the main function, take two integers as input,
* call the calculateSum function, and print the result.

! Input:
! Please enter first number: 9
! Please enter second number: 6

! Output:
! Sum: 15
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int num1, int num2, int sum);

int main()
{
    // Declare Variables.
    int num1 = 0, num2 = 0, sumNumbers = 0;

    // Call Functions.
    resultFun(num1, num2, sumNumbers);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Calculate Sum Program (Version 1) ..\n\n");
}

// Get First Number - Function.
int getFirstNumberFun(int num1)
{
    printf("Please enter a first number: ");
    scanf("%d", &num1);

    return num1;
}

// Get Second Number - Function.
int getSecondNumberFun(int num2)
{
    printf("Please enter a second number: ");
    scanf("%d", &num2);

    return num2;
}

// Calculate Sum - Function.
int calculateSumFun(int num1, int num2, int sum)
{
    // Calculate Sum.
    sum = num1 + num2;

    return sum;
}

// Result - Function.
void resultFun(int num1, int num2, int sum)
{
    printWelcomeMessageFun();
    num1 = getFirstNumberFun(num1);
    num2 = getSecondNumberFun(num2);
    sum = calculateSumFun(num1, num2, sum);

    printf("Sum: %d\n\n", sum);
}
//* End Function ..
