

//* Even or Odd Program (Version 1).

/*
 * Write a program that takes an integer as input and checks if it is even or odd.
 */

/*
! Input:
! Please enter a number: 2

! Output:
! Even.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void evenOrOddFun(int num);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int number = 0;

    // Call Functions.
    evenOrOddFun(number);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
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

// Even or odd - Function.
void evenOrOddFun(int num)
{
    num = receiveNumberFun(num);

    // if (num % 2 == 0)
    // {
    //     printf("\nEven.");
    // }
    // else
    // {
    //     printf("\nOdd.");
    // }

    // num % 2 == 0 ? printf("\nEven.") : printf("\nOdd.");

    printf(num % 2 == 0 ? "\nEven." : "\nOdd.");
}
//* End Function ..
