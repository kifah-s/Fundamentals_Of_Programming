

//* Coin Values Program (Version 1).

/*
 *  Create a program that uses an enumeration for simple
 * coin values (Penny, Nickel, Dime, and Quarter). Prompt
 * the user to enter a number (1-4) to select a coin value and print the selected coin value.
 */

/*
! Input:
! Please enter a number (1 - 4) to select a Coin Values: 3

! Output:
! Selected Coin Values: Dime.
*/

#include <stdio.h>
#include <string.h>

// Declare Enum.
enum coinValues
{
    Penny = 1,
    Nickel,
    Dime,
    Quarter
};

void welcomeMessageFun();
int gettingNumberFun(int n);
void printCoinValuesFun(int n);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variable.
    int num = 0;

    // Call Functions.
    num = gettingNumberFun(num);
    printCoinValuesFun(num);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Coin Values Program (Version 1) ..\n\n");
}

// Getting number - Function.
int gettingNumberFun(int n)
{
    printf("Please enter a number (1 - 4) to select a Coin Values: ");
    scanf("%d", &n);

    return n;
}

// Print Coin Values - Function.
void printCoinValuesFun(int n)
{
    if (n >= Penny && n <= Quarter)
    {
        printf("Selected Coin Values: ");
        switch (n)
        {
        case Penny:
            printf("Penny.");
            break;

        case Nickel:
            printf("Nickel.");
            break;

        case Dime:
            printf("Dime.");
            break;

        case Quarter:
            printf("Quarter.");
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
