

//* Check if a Number is Even or Odd Using Pointers Program (Version 2).

/*
 * Program to Check if a Number is Even or Odd using Pointers.
 */

/*
! Input:
! Please enter a number: 5

! Output:
! Number is: Odd
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();
int gettingNumberFun(int num);
int *variableToPointerFun(int num, int *poi);
void checkNumberFun(int *poi);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables and Pointers.
    int number = 0, *pointer;

    // Getting number.
    number = gettingNumberFun(number);

    *pointer = *variableToPointerFun(number, pointer);

    // Check number.
    checkNumberFun(pointer);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Check if a Number is Even or Odd Using Pointers Program (Version 2) ..\n\n");
}

// Getting number - Function.
int gettingNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Variable to pointer - Function.
int *variableToPointerFun(int num, int *poi)
{
    poi = &num;

    return poi;
}

// Check number - Function.
void checkNumberFun(int *poi)
{
    if (*poi % 2 == 0)
    {
        printf("\nNumber is: Even");
    }
    else
    {
        printf("\nNumber is: Odd");
    }
}
//* End Function ..
