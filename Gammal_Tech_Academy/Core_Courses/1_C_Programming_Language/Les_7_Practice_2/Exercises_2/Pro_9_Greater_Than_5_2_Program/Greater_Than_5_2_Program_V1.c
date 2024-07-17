

//* Greater Than 5 2 Program (Version 1).

/*
 * Write a program to handle a more complex scenario using else if,
 * The program should prompt the user to input a number,
 * If the entered number is greater than 5, the program should print "Hello" five times,
 * If the entered number is equal to 5, it should print "Hi" once,
 * If the entered number is less than 5, it should print "Greetings" three times.
 */

/*
! Input:
! Enter a number: 20

! Output:
! Hello
! Hello
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
    printf("\n\nYou welcome in Greater Than 5 2 Program (Version 1) ..\n\n");
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
    if (num > 5)
    {
        for (int i = 0; i < 5; i++)
        {
            printf("\nHello");
        }
    }
    else if (num == 5)
    {
        printf("\nHi");
    }
    else
    {
        for (int i = 0; i < 3; i++)
        {
            printf("\nGreetings");
        }
    }
}
//* End Function ..
