

//* Number 5 Program (Version 1).

/*
 * Write a program that asks the user to input numbers continuously until the user enters the number 5,
 * Once the user enters 5, the program should print "Is Five",
 * using a do...while loop.
 */

/*
! Input:
! Please enter a Number: 5

! Output:
! Is Five.
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingNumberFun(int num);
void checkNumberFun(int num);

int main()
{
    welcomeMessageFun();

    // Declare Variable.
    int number = 0;

    checkNumberFun(number);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Number 5 Program (Version 1) ..\n\n");
}

// Getting Number / Function.
int gettingNumberFun(int num)
{
    printf("Please enter a Number: ");
    scanf("%i", &num);

    return num;
}

// Check Number / Function.
void checkNumberFun(int num)
{
    do
    {
        num = gettingNumberFun(num);

    } while (num != 5);

    printf("\nIs Five.");
}
//* End Function ..
