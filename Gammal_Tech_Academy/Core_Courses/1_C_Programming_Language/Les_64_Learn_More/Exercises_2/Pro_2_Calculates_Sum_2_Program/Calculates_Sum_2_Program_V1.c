

//* Calculates Sum 2 Program (Version 1).

/*
 * Modify the previous program to calculate the sum using the formula n * (n + 1) / 2.
/*
! Input:
! Please enter a number: 5

! Output:
! Sum = 15
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void printSumFun(int num, int sum);

int main()
{
    // Declare Variables.
    int myNumber = 0, sum = 1;

    // Call Functions.
    printSumFun(myNumber, sum);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Calculates Sum 2 Program (Version 1) ..\n\n");
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
    sum = (num * (num + 1)) / 2;

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
