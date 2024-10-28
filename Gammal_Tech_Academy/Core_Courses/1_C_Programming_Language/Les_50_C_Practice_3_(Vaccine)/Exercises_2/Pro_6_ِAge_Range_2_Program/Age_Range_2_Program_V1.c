

//* Age Range 2 Program (Version 1).

/*
 * Write a program that includes a function to determine the age category of a user based on their input.
 * The categories are Child (0-12 years), Teenager (13-19 years),
 * and Adult (20 years and above), Handle invalid age inputs.
 */

/*
! Input:
! Please enter your age: 18

! Output:
! You are a Teenager.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int receiveAgeFun(int a);
void checkAgeFun(int a);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int age = 0;

    // Call Functions.
    checkAgeFun(age);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Age Range 2 Program (Version 1) ..\n\n");
}

// Receive age - Function.
int receiveAgeFun(int a)
{
    printf("Please enter your age: ");
    scanf("%d", &a);

    return a;
}

// Check Age - Function.
void checkAgeFun(int a)
{
    a = receiveAgeFun(a);

    if (a >= 0 && a <= 12)
    {
        printf("\nChild.");
    }
    else if (a >= 13 && a <= 19)
    {
        printf("\nTeenager.");
    }
    else if (a >= 20)
    {
        printf("\nAdult.");
    }
    else
    {
        printf("\nInvalid Age.");
    }
}
//* End Function ..
