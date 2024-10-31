

//* Searches Cars Program (Version 1).

/*
 * Write a program that searches for the number of cars of a specific brand in an exhibition and prints the count.
 */

/*
! Input:
! Please enter brand: BMW

! Output:
! Number of car of brand BMW: 2
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printCounterFun(char bra[25], int arrLen, char arr[][25], int cou);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array and Variables.
    char myArray[][25] = {"Mercedes", "BMW", "Mazda", "Mercedes", "BMW", "Mercedes"};
    int arrLength = sizeof(myArray) / sizeof(myArray[0]);
    char myBrand[25];
    int counter = 0;

    // Call Functions.
    printCounterFun(myBrand, arrLength, myArray, counter);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Searches Cars Program (Version 1) ..\n\n");
}

// Receive brand - Function.
void receiveBrandFun(char bra[25])
{
    printf("Please enter brand: ");
    scanf("%s", bra);
}

// Search for brand - Function.
int searchForBrandFun(char bra[25], int arrLen, char arr[][25], int cou)
{
    receiveBrandFun(bra);

    for (int i = 0; i < arrLen; i++)
    {
        if (strcmp (bra, arr[i]) == 0)
        {
            cou++;
        }
    }

    return cou;
}

// Print counter of brand - Function.
void printCounterFun(char bra[25], int arrLen, char arr[][25], int cou)
{
    cou = searchForBrandFun(bra, arrLen, arr, cou);

    printf("\nNumber of car of brand %s: %d", bra, cou);
}
//* End Function ..
