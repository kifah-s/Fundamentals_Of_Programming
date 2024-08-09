

//* Welcome Message 4 Program (Version 1).

/*
 * Write a program that prompts the user to enter their first name and age,
 * reads the input, and then prints a welcome message with their name only if the age is greater than 18,
 * If the age is 18 or younger, print only the age.
 */

/*
! Input:
! Please enter first name: kifah
! Please enter your age: 12

! Output:
! Your age: 12
*/

#include <stdio.h>

void welcomeMessageFun();
void gettingFirstNameFun(char arr[25]);
int gettingAgeFun(int a);
void welcomeMessage2Fun(char arr[25], int a);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    char firstName[25];
    int age = 0;

    // Calling Functions.
    gettingFirstNameFun(firstName);
    age = gettingAgeFun(age);
    welcomeMessage2Fun(firstName, age);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Welcome Message 4 Program (Version 1) ..\n\n");
}

// Getting first name - Function.
void gettingFirstNameFun(char arr[25])
{
    printf("Please enter first name: ");
    scanf("%s", arr);
}

// Getting second name - Function.
int gettingAgeFun(int a)
{
    printf("Please enter your age: ");
    scanf("%d", &a);

    return a;
}

// Welcome message 2  - Function.
void welcomeMessage2Fun(char arr[25], int a)
{
    if (a > 18)
    {

        printf("\nWelcome, %s !!", arr);
    }
    else
    {

        printf("\nYour age: %d", a);
    }
}
//* End Function ..
