

//* Check if a Number is Even or Odd Using Pointers Program (Version 3).

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

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables and Pointers.
    int number = 0, *pointer;

    // Getting number.
    printf("Please enter a number: ");
    scanf("%d", &number);

    pointer = &number;

    // Check number.
    if (*pointer % 2 == 0)
    {
        printf("\nNumber is: Even");
    }
    else
    {
        printf("\nNumber is: Odd");
    }

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Check if a Number is Even or Odd Using Pointers Program (Version 3) ..\n\n");
}

//* End Function ..
