

//* Greater Than 5 Program (Version 2).

/*
 * Write a program that prompts the user to input a number,
 * If the entered number is greater than 5, the program should print "Hello" five times,
 * If the entered number is 5 or less, it should print "Hello" three times.
 */

/*
! Input:
! Enter a number: 4

! Output:
! Hello
! Hello
! Hello
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingNumberFun(int num);
void checkNumberFun(int num);

int main()
{
    welcomeMessageFun();

    // Declare Variables.
    int number = 0;

    number = gettingNumberFun(number);
    checkNumberFun(number);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Greater Than 5 Program (Version 2) ..\n\n");
}

// Getting number function.
int gettingNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%i", &num);

    return num;
}

// Check Number function.
void checkNumberFun(int num)
{
    if (num <= 5)
    {
        for (int i = 0; i < 3; i++)
        {
            printf("\nHello");
        }
    }
    else
    {
        for (int i = 0; i < 5; i++)
        {
            printf("\nHello");
        }
    }
}
//* End Function ..
