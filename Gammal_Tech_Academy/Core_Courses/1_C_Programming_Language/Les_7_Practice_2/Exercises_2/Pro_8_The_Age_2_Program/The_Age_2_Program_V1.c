

//* The Age 2 Program (Version 1).

/*
 * Write a program to handle a more challenging age scenario,
 * The program should reserve two variables named age and i,
 * Prompt the user to input their age..If the entered age is less than 10,
 * the program should print "Hello" on a new line for each year of the user's age,
 * If the age is between 10 and 20 (inclusive), print "Hi" instead,
 * If the age is greater than 20, print "Greetings." In all other cases, print "Hello" once.
 */

/*
! Input:
! How old are you: 22

! Output:
! Greetings
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
    printf("\n\nYou welcome in The Age 2 Program (Version 1) ..\n\n");
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
    else if (age >= 10 && age <= 20)
    {
        printf("\nHi");
    }
    else if (age > 20)
    {
        printf("\nGreetings");
    }
    else
    {
        printf("\nHello");
    }
}
//* End Function ..
