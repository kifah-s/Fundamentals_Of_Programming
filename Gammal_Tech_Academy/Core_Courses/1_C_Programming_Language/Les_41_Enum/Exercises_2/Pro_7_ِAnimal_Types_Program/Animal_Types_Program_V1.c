

//* Animal Types Program (Version 1).

/*
 * Create a program that uses an enumeration for simple
 * animal types (Dog, Cat, and Fish). Prompt the user to
 * enter a number (1-3) to select an animal type and print the selected animal type.
 */

/*
! Input:
! Please enter a number (1 - 2) to select a Animal Types: 1

! Output:
! Selected Animal Types: Fish.
*/

#include <stdio.h>
#include <string.h>

// Declare Enum.
enum animalTypes
{
    dog = 1,
    cat,
    fish
};

void welcomeMessageFun();
int gettingNumberFun(int n);
void printAnimalTypesFun(int n);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variable.
    int num = 0;

    // Call Functions.
    num = gettingNumberFun(num);
    printAnimalTypesFun(num);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Animal Types Program (Version 1) ..\n\n");
}

// Getting number - Function.
int gettingNumberFun(int n)
{
    printf("Please enter a number (1 - 3) to select a Animal Type: ");
    scanf("%d", &n);

    return n;
}

// Print Animal Types - Function.
void printAnimalTypesFun(int n)
{
    if (n >= dog && n <= fish)
    {
        printf("Selected Animal Types: ");
        switch (n)
        {
        case dog:
            printf("Dog.");
            break;

        case cat:
            printf("Cat.");
            break;

        case fish:
            printf("Fish.");
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
