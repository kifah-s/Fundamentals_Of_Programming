

//* Number of Characters Program (Version 2).

/*
 * Write a program to count the number of characters in a given brand.
 */

/*
! Input:
! Please enter brand: BMW

! Output:
! Number of characters BMW: 3
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printNumberOfCharactersFun(char bra[], int numOfCha);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array and Variables.
    char myBrand[25];
    int numOfCharacters = 0;

    // Call Functions.
    printNumberOfCharactersFun(myBrand, numOfCharacters);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Number of Characters Program (Version 2) ..\n\n");
}

// Receive brand - Function.
void receiveBrandFun(char bra[])
{
    printf("Please enter brand: ");
    scanf("%s", bra);
}

// Print Number Of Characters - Function.
void printNumberOfCharactersFun(char bra[], int numOfCha)
{
    receiveBrandFun(bra);

    numOfCha = strlen(bra);

    printf("\nNumber of characters %s: %d", bra, numOfCha);
}
//* End Function ..
