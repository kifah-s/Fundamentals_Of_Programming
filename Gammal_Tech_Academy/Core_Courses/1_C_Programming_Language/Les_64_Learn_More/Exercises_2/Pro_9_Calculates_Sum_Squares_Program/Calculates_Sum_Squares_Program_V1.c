

//* Calculates Sum Squares Program (Version 1).

/*
 * Write a program that takes an integer as input and calculates the sum of the squares of its digits.
/*
! Input:
! Please enter a number: 349

! Output:
! Sum of squares of digits: 106
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int num, int sum);

int main()
{
    // Declare Variables.
    int myNumber = 0, sumSquares = 0;

    // Call Functions.
    resultFun(myNumber, sumSquares);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Calculates Sum Squares Program (Version 1) ..\n\n");
}

// Receive Number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a Number: ");
    scanf("%d", &num);

    return num;
}

// Calculate sum squares - Function.
int calculateSumSquaresFun(int num, int sum)
{
    int digit = 0, square = 0;

    while (num != 0)
    {
        digit = num % 10;
        square = digit * digit;
        sum = sum + square;
        num = num / 10;
    }

    return sum;
}

// Result - Function.
void resultFun(int num, int sum)
{
    welcomeMessageFun();
    num = receiveNumberFun(num);
    sum = calculateSumSquaresFun(num, sum);

    printf("\nSum of squares of digits: %d\n\n", sum);
}
//* End Function ..
