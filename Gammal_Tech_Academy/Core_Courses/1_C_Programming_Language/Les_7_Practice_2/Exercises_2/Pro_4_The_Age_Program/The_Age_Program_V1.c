

//* The Age Program (Version 1).

/*
 * Write a program that prompts the user to input their age,
 * The program should reserve two variables named age and i,
 * If the entered age is less than 10,
 * the program should use a loop to print "Hello" on a new line for each year of the user's age,
 * Otherwise, it should simply print "Hello" once.
 */

/*
! Input:
! How old are you: 9

! Output:
! Hello
! Hello
! Hello
! Hello
! Hello
! Hello
! Hello
! Hello
! Hello
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingAgeFun(int age);
void checkAgeFun(int age);

int main()
{
    welcomeMessageFun();

    // Declare Variables.
    int age = 0;

    age = gettingAgeFun(age);
    checkAgeFun(age);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in The Age Program (Version 1) ..\n\n");
}

// Getting Age function.
int gettingAgeFun(int age)
{
    printf("Please enter Your age: ");
    scanf("%i", &age);

    return age;
}

// Check Age function.
void checkAgeFun(int age)
{
    if (age < 10)
    {
        for (int i = 0; i < age; i++)
        {
            printf("\nHello");
        }
    }
    else
    {
        printf("\nHello");
    }
}
//* End Function ..
