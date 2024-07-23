

//* Between 18 And 25 Program (Version 1).

/*
 * Write a program that asks the user to input their age,
 * If the entered age is between 18 and 25 (inclusive),
 * the program should print "You are eligible for the youth discount."
 * Otherwise, it should print "Sorry, no youth discount for you."
 */

/*
! Input:
! Please enter your age: 20

! Output:
! You are eligible for the youth discount.
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingAgeFun(int num);
void between18And25Fun(int num);

int main()
{
    // Declare Variables.
    int age = 0;

    between18And25Fun(age);

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Between 18 And 25 Program (Version 1) ..\n\n");
}

// Getting Age - Function.
int gettingAgeFun(int a)
{
    printf("Please Enter Your age: ");
    scanf("%i", &a);

    return a;
}

// Between 18 And 25 - Function.
void between18And25Fun(int a)
{
    welcomeMessageFun();

    a = gettingAgeFun(a);

    if (a >= 18 && a <= 25)
    {
        printf("\nYou are eligible for the youth discount.\n\n");
    }
    else
    {
        printf("\nSorry, no youth discount for you.\n\n");
    }
}
//* End Function ..
