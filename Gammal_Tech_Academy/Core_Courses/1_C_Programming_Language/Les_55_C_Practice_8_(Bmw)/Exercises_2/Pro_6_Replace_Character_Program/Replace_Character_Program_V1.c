

//* Replace Character Program (Version 1).

/*
 * Write a program to replace a specific character in all brands.
 */

/*
! Input:
! Please enter the character to replace: e

! Output:
! Brands after replacement:
! M*rc*d*s
! BMW
! Mazda
! M*rc*d*s
! BMW
! M*rc*d*s
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printNewArrFun(char arr[][25], int arrLen, char cha, char sym);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Arrays and Variables.
    char brandMenu[][25] = {"Mercedes", "BMW", "Mazda", "Mercedes", "BMW", "Mercedes"};
    int arrLength = sizeof(brandMenu) / sizeof(brandMenu[0]);
    char character, symbol = '*';

    // Call Functions.
    printNewArrFun(brandMenu, arrLength, character, symbol);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Replace Character Program (Version 1) ..\n\n");
}

// Receive character from user - Function.
char receiveCharacterFun(char cha)
{
    printf("Please enter the character to replace: ");
    scanf("%c", &cha);

    return cha;
}

// Replace character - Function.
void replaceCharacterFun(char arr[][25], int arrLen, char cha, char sym)
{
    cha = receiveCharacterFun(cha);

    for (int i = 0; i < arrLen; i++)
    {
        for (int j = 0; j < arr[i][j]; j++)
        {
            if (arr[i][j] == cha)
            {
                arr[i][j] = sym;
            }
        }
    }
}

// Print new arr - Function.
void printNewArrFun(char arr[][25], int arrLen, char cha, char sym)
{
    replaceCharacterFun(arr, arrLen, cha, sym);

    printf("\nBrands after replacement: \n");
    for (int i = 0; i < arrLen; i++)
    {
        printf("%s\n", arr[i]);
    }
}
//* End Function ..
