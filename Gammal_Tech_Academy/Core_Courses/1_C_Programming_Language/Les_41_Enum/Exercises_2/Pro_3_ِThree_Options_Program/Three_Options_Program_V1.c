

//* Three Options Program (Version 1).

/*
 * Create a program that uses an enumeration for a
 * simple menu with three options: Option1, Option2, and
 * Option3. Prompt the user to enter a number (1-3) to select
 * an option and print the selected option.
 */

/*
! Input:
! Please enter a number (1 - 3) to select a menu option: 2

! Output:
! Selected menu option: option 2.
*/

#include <stdio.h>
#include <string.h>

// Declare Enum.
enum options
{
    option1 = 1,
    option2,
    option3
};

void welcomeMessageFun();
int gettingNumberFun(int n);
void printOptionFun(int n);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variable.
    int num = 0;

    // Call Functions.
    num = gettingNumberFun(num);
    printOptionFun(num);


    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Three Options Program (Version 1) ..\n\n");
}

// Getting number - Function.
int gettingNumberFun(int n)
{
    printf("Please enter a number (1 - 3) to select a menu option: ");
    scanf("%d", &n);

    return n;
}

// Print option - Function.
void printOptionFun(int n)
{
    if (n >= option1 && n <= option3)
    {
        printf("Selected menu option: ");
        switch (n)
        {
        case option1:
            printf("option 1");
            break;

        case option2:
            printf("option 2");
            break;

        case option3:
            printf("option 3");
            break;

        default:
            break;
        }
    }
    else
    {
        printf("Invalid input, please enter a number between 1 and 3.");
    }
}
//* End Function ..
