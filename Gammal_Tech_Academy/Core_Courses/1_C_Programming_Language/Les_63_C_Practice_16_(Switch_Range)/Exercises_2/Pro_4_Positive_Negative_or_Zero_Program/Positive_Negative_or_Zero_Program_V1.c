

//* Positive Negative or Zero Program (Version 1).

/*
 * Write a program that checks if a number is positive, negative, or zero.
/*
! Input:
! Please Enter a number: -6

! Output:
! The number is negative.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void checkNumberFun(int num);

int main()
{
    // Declare Variables.
    int myNumber = 0;

    // Call Functions.
    checkNumberFun(myNumber);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Positive Negative or Zero Program (Version 1) ..\n\n");
}

// Receive Number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Check Number - Function.
void checkNumberFun(int num)
{
    welcomeMessageFun();
    num = receiveNumberFun(num);

    if (num > 0)
    {
        printf("\nThe Number is Positive\n\n");
    }
    else if (num < 0)
    {
        printf("\nThe Number is Negative\n\n");
    }
    else
    {
        printf("\nThe Number is Zero\n\n");
    }
}

//* End Function ..
