

//* Number of Characters Program (Version 1).

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
void printCounterFun(char bra[25], int arrLen, int cou);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array and Variables.
    char myBrand[25];
    int arrLength = sizeof(myBrand) / sizeof(myBrand[0]);
    int counter = 0;

    // Call Functions.
    printCounterFun(myBrand, arrLength, counter);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Number of Characters Program (Version 1) ..\n\n");
}

// Receive brand - Function.
void receiveBrandFun(char bra[])
{
    printf("Please enter brand: ");
    scanf("%s", bra);
}

// Count characters - Function.
int countCharactersFun(char bra[], int arrLen, int cou)
{
    receiveBrandFun(bra);

    for (int i = 0; i < arrLen; i++)
    {
        if (bra[i] >= 'A' && bra[i] <= 'Z' || bra[i] >= 'a' && bra[i] <= 'z')
        {
            cou++;
        }
    }

    return cou;
}

// Print counter - Function.
void printCounterFun(char bra[], int arrLen, int cou)
{
    cou = countCharactersFun(bra, arrLen, cou);

    printf("\nNumber of characters %s: %d", bra, cou);
}
//* End Function ..
