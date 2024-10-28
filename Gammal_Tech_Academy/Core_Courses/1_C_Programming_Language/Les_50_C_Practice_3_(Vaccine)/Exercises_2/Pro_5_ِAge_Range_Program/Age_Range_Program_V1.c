

//* Age Range Program (Version 1).

/*
 * Write a program that takes an integer input 'age' and
 * prints "Child," "Teenager," or "Adult" based on the age range.
 */

/*
! Input:
! Please enter your age: 20

! Output:
! Adult
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
    printf("\n\nYou welcome in Age Range Program (Version 1) ..\n\n");
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
    else
    {
        printf("\nAdult.");
    }
}
//* End Function ..
