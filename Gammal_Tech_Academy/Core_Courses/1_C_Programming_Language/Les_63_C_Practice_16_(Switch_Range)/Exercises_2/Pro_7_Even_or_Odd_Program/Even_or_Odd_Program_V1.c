

//* Even or Odd Program (Version 1).

/*
 * Write a program that determines if a given number is even or odd.
/*
! Input:
! Please enter number: 3

! Output:
! The number is odd.
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
    printf("\n\nYou welcome in Even or Odd Program (Version 1) ..\n\n");
}

// Receive number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Check number - Function.
void checkNumberFun(int num)
{
    welcomeMessageFun();
    num = receiveNumberFun(num);

    switch (num % 2 == 0)
    {
    case 1:
        printf("\nThe number is even.\n\n");
        break;

    case 0:
        printf("\nThe number is odd.\n\n");
        break;
    }
}

//* End Function ..
