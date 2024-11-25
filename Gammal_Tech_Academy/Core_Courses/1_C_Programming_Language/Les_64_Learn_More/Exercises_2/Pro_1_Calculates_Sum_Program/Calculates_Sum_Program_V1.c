

//* Calculates Sum Program (Version 1).

/*
 * Write a program that takes a number as input and calculates the sum of its digits using a loop.
/*
! Input:
! Please enter a number: 7

! Output:
! Sum = 28
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void printSumFun(int num, int sum);

int main()
{
    // Declare Variables.
    int myNumber = 0, sum = 0;

    // Call Functions.
    printSumFun(myNumber, sum);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Calculates Sum Program (Version 1) ..\n\n");
}

// Receive Number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a Number: ");
    scanf("%d", &num);

    return num;
}

// Calculate Sum - Function.
int calculateSumFun(int num, int sum)
{
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }

    return sum;
}

// Print Sum - Function.
void printSumFun(int num, int sum)
{
    welcomeMessageFun();
    num = receiveNumberFun(num);
    sum = calculateSumFun(num, sum);

    printf("\nSum = %d\n\n", sum);
}
//* End Function ..
