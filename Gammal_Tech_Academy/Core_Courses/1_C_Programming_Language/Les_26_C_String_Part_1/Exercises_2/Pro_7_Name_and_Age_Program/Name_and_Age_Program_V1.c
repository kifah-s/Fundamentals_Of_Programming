

//* Name and Age Program (Version 1).

/*
 * Write a program that prompts the user to enter their first name and age, reads the input,
 * and then prints a welcome message with their name only if the age is greater than 18.
 * If the age is 18 or younger, print only the age.
 */

/*
! Input:
! Please enter first name: kifah
! Please enter age: 12

! Output:
! Age: 12
*/

#include <stdio.h>

void welcomeMessageFun();
void gettingFirstNameFun(char arr1[25]);
int gettingAgeFun(int a);

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

    if (age <= 18)
    {
        printf("Age: %d", age);
    }
    else
    {
        printf("Hello, %s", firstName);
    }

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Name and Age Program (Version 1) ..\n\n");
}

// Getting first name - Function.
void gettingFirstNameFun(char arr1[25])
{
    printf("Please enter first name: ");
    scanf("%s", arr1);
}

// Getting age name - Function.
int gettingAgeFun(int a)
{
    printf("Please enter age: ");
    scanf("%d", &a);

    return a;
}

//* End Function ..
