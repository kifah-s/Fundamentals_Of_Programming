

//* Reverse Order Program (Version 1).

/*
 * Write a program that takes an integer as input and prints its digits in reverse order.
/*
! Input:
! Please enter a number: 789456

! Output:
! Reversed digit: 6 5 4 9 8 7
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int num);

int main()
{
    // Declare Variables.
    int myNumber = 0;

    // Call Functions.
    resultFun(myNumber);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Reverse Order Program (Version 1) ..\n\n");
}

// Receive Number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a Number: ");
    scanf("%d", &num);

    return num;
}

// Reversed digit - Function.
int reversedDigitFun(int num)
{
    int digit = 0;

    printf("\nReversed digit: ");
    while (num > 0)
    {
        digit = num % 10;
        printf("%d ", digit);
        num = num / 10;
    }
}

// Print Result - Function.
void resultFun(int num)
{
    welcomeMessageFun();
    num = receiveNumberFun(num);
    reversedDigitFun(num);

    printf("\n\n");
}
//* End Function ..
