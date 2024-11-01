

//* Brand Menu Program (Version 2).

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
void printChoiceFun(int cho, char braMenu[][25], int arrLen);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Arrays and Variables.
    char brandMenu[][25] = {"Mercedes", "BMW", "Mazda"};
    int arrLength = sizeof(brandMenu) / sizeof(brandMenu[0]);
    int choice = 0;

    // Call Functions.
    printChoiceFun(choice, brandMenu, arrLength);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Brand Menu Program (Version 2) ..\n\n");
}

// View brands menu - Function.
void viewBrandsMenuFun(char braMenu[][25], int arrLen)
{
    printf("Brand Menu: \n");
    for (int i = 0; i < arrLen; i++)
    {
        printf("%d) %s\n", i + 1, braMenu[i]);
    }
}

// Choice brand - Function.
int choiceBrandFun(int cho, char braMenu[][25], int arrLen)
{
    viewBrandsMenuFun(braMenu, arrLen);

    printf("\nPlease enter your choice: ");
    scanf("%d", &cho);

    return cho;
}

// Print choice - Function.
void printChoiceFun(int cho, char braMenu[][25], int arrLen)
{
    cho = choiceBrandFun(cho, braMenu, arrLen);

    printf("\nYour choice: ");
    for (int i = 0; i < arrLen; i++)
    {
        if (cho == i + 1)
        {
            printf("%s.", braMenu[i]);
        }
    }
}
//* End Function ..
