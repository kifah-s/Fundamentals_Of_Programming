

//* Sorts Positions Program (Version 1).

/*
 * Write a program that counts the occurrences of a specific car brand,
 * and sorts their positions in ascending order using a function and arrays.
 */

/*
! Input:
! Please enter brand: BMW

! Output:
! Positions of car of brand BMW: 2 5
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int searchForBrandFun(char bra[25], int arrLen, char arr[][25]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array and Variables.
    char myArray[][25] = {"Mercedes", "BMW", "Mazda", "Mercedes", "BMW", "Mercedes"};
    int arrLength = sizeof(myArray) / sizeof(myArray[0]);
    char myBrand[25];

    // Call Functions.
    searchForBrandFun(myBrand, arrLength, myArray);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sorts Positions Program (Version 1) ..\n\n");
}

// Receive brand - Function.
void receiveBrandFun(char bra[25])
{
    printf("Please enter brand: ");
    scanf("%s", bra);
}

// Search for brand - Function.
int searchForBrandFun(char bra[25], int arrLen, char arr[][25])
{
    receiveBrandFun(bra);

    printf("\nPositions of car of brand %s: ", bra);
    for (int i = 0; i < arrLen; i++)
    {
        if (strcmp(bra, arr[i]) == 0)
        {
            printf("%d  ", i + 1);
        }
    }
}

//* End Function ..
