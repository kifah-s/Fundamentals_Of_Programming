

//* Welcome Message 3 Program (Version 1).

/*
 * Write a program that prompts the user to enter their first name and age,
 * reads the input, and then prints a welcome message with their name and age.
 */

/*
! Input:
! Please enter first name: kifah
! Please enter your age: 26

! Output:
! Welcome, kifah !!
! Your age: 20
*/

#include <stdio.h>

void welcomeMessageFun();
void gettingFirstNameFun(char arr[25]);
int gettingAgeFun(int a);
void welcomeMessage2Fun(char arr[25],int a);

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
    printf("\n\nYou welcome in Welcome Message 3 Program (Version 1) ..\n\n");
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
    printf("\nWelcome, %s !!", arr);
    printf("\nYour age: %d", a);
}
//* End Function ..
