

//* Brand Menu Program (Version 1).

/*
 * Write a program to display a menu for brand options.
 */

/*
! Input:
! Brand Menu:
! 1) Mercedes
! 2) BMW
! 3) Mazda
! Please enter your choice: 1

! Output:
! Your choice Mercedes.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printChoiceFun(int cho);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int choice = 0;

    // Call Functions.
    printChoiceFun(choice);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Brand Menu Program (Version 1) ..\n\n");
}

// View brands menu - Function.
void viewBrandsMenuFun()
{
    printf("Brand Menu: \n");
    printf("1) Mercedes\n2) BMW \n3) Mazda\n");
}

// Choice brand - Function.
int choiceBrandFun(int cho)
{
    viewBrandsMenuFun();

    printf("Please enter your choice: ");
    scanf("%d", &cho);

    return cho;
}

// Print choice - Function.
void printChoiceFun(int cho)
{
    cho = choiceBrandFun(cho);

    printf("\nYour choice: ");
    switch (cho)
    {
    case 1:
        printf("Mercedes");
        break;

    case 2:
        printf("BMW");
        break;

    case 3:
        printf("Mazda");
        break;

    default:
        break;
    }
}
//* End Function ..
