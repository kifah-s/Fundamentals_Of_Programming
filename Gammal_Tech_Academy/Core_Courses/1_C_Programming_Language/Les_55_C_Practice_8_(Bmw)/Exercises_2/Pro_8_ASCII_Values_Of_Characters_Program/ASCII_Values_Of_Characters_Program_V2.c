

//* ASCII Values Of Characters Program (Version 2).

/*
 * Write a program to display the ASCII values of characters in a given brand.
 */

/*
! Input:
! Please enter a brand: BMW

! Output:
! ASCII Values Of Characters:
! B: 66
! M:77
! W: 87
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void ASCIIValuesOfCharactersFun(char bra[25]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Arrays and Variables.
    // char brandMenu[][25] = {"Mercedes", "BMW", "Mazda", "Mercedes", "BMW", "Mercedes"};
    // int arrLength = sizeof(brandMenu) / sizeof(brandMenu[0]);
    char brand[25];

    // Call Functions.
    ASCIIValuesOfCharactersFun(brand);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in ASCII Values Of Characters Program (Version 2) ..\n\n");
}

// Receive brand from user - Function.
void ReceiveBrandFun(char bra[25])
{
    printf("Please enter a brand: ");
    scanf("%s", bra);
}

// ASCII Values Of Characters - Function.
void ASCIIValuesOfCharactersFun(char bra[25])
{
    ReceiveBrandFun(bra);

    printf("\nASCII Values Of Characters %s:\n", bra);

    for (int i = 0; i < bra[i]; i++)
    {
        printf("%c: %d\n", bra[i], bra[i]);
    }
}

//* End Function ..
