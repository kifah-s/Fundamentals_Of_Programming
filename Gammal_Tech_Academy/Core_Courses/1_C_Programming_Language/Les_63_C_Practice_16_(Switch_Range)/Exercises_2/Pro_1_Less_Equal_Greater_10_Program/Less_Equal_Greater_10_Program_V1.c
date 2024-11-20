

//* Less Equal Greater 10 Program (Version 1).

/*
 * Write a program that takes a number as input,
 * and prints whether it's less than 10, equal to 10, or greater than 10.
 */

/*
! Input:
! Enter a number: 12

! Output:
! The number is greater than 10.
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
    printf("\n\nYou welcome in Less Equal Greater 10 Program (Version 1) ..\n\n");
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

    if (num > 10)
    {
        printf("\nThe number is Greater than 10.\n\n");
    }
    else if (num == 10)
    {
        printf("\nThe number is Equal 10.\n\n");
    }
    else
    {
        printf("\nThe number is Less than 10.\n\n");
    }
}

//* End Function ..
