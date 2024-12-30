

//* Calculate Power Program (Version 1).

/*
* Write a program with a function calculatePower that takes two integers as input, base and exponent,
* and returns the result of base raised to the power of the exponent.
* In the main function, take base and exponent as input, call the calculatePower function, and print the result.

! Input:
! Please enter an integer: 2
! Please enter a exponent: 3

! Output:
! 2 ^ 3 = 8
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int num, int expo, int res);

int main()
{
    // Declare Variables.
    int number = 0, exponent = 0, result = 1;

    // Call Functions.
    resultFun(number, exponent, result);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Calculate Power Program (Version 1) ..\n\n");
}

// Get Number - Function.
int getNumberFun(int num)
{
    printf("Please enter an integer: ");
    scanf("%d", &num);

    return num;
}

// Get Exponent - Function.
int getExponentFun(int expo)
{
    printf("Please enter a exponent: ");
    scanf("%d", &expo);

    return expo;
}

// Calculate Power - Function.
int calculatePowerFun(int num, int expo, int res)
{
    for (int i = 0; i < expo; i++)
    {
        res = res * num;
    }

    return res;
}

// Result - Function.
void resultFun(int num, int expo, int res)
{
    printWelcomeMessageFun();
    num = getNumberFun(num);
    expo = getExponentFun(expo);
    res = calculatePowerFun(num, expo, res);

    printf("%d ^ %d = %d\n\n", num, expo, res);
}
//* End Function ..
