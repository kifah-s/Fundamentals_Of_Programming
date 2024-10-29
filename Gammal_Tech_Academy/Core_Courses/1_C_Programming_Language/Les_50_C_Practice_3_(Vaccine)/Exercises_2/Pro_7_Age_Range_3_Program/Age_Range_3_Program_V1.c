

//* Age Range 3 Program (Version 1).

/*
 * Write a program that uses a struct to store information about a person, including their age.
 * The program should then categorize the person into different age groups (Child, Teenager, or Adult)
 * based on their age. If the entered age is not valid (less than 0), the program should print "Invalid age."
 */

/*
! Input:
! Please enter your age: 5

! Output:
! You are a Child.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

// Declare Struct.
struct Person
{
    int age;
};

void welcomeMessageFun();
int receiveAgeFun(struct Person p1);
void checkAgeFun(struct Person p1);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare person 1.
    struct Person p1;

    // Call Functions.
    checkAgeFun(p1);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Age Range 3 Program (Version 1) ..\n\n");
}

// Receive age - Function.
int receiveAgeFun(struct Person p1)
{
    printf("Please enter your age: ");
    scanf("%d", &p1.age);

    return p1.age;
}

// Check Age - Function.
void checkAgeFun(struct Person p1)
{
    p1.age = receiveAgeFun(p1);

    if (p1.age >= 0 && p1.age <= 12)
    {
        printf("\nChild.");
    }
    else if (p1.age >= 13 && p1.age <= 19)
    {
        printf("\nTeenager.");
    }
    else if (p1.age >= 20)
    {
        printf("\nAdult.");
    }
    else
    {
        printf("\nInvalid Age.");
    }
}
//* End Function ..
