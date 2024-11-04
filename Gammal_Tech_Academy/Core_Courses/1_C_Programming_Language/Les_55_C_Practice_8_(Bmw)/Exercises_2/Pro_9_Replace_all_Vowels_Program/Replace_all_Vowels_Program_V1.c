

//* Replace all Vowels Program (Version 1).

/*
 * Write a program to replace all vowels in a given brand with '*'.
 */

/*
! Input:
! Please enter a brand: Mercedes

! Output:
! Brand after replacing vowels: M*rc*d*s
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printNewArrayFun(char arr[][25], int arrLen, char bra[25], char sym);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Arrays and Variables.
    char brandMenu[][25] = {"Mercedes", "BMW", "Mazda", "Mercedes", "BMW", "Mercedes"};
    int arrLength = sizeof(brandMenu) / sizeof(brandMenu[0]);
    char brand[25], symbol = '*';

    // Call Functions.
    printNewArrayFun(brandMenu, arrLength, brand, symbol);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Replace all Vowels Program (Version 1) ..\n\n");
}

// Receive brand from user - Function.
void ReceiveBrandFun(char bra[25])
{
    printf("Please enter a brand: ");
    scanf("%s", bra);
}

// Replace Characters - Function.
void replaceCharactersFun(char arr[][25], int arrLen, char bra[25], char sym)
{
    ReceiveBrandFun(bra);

    for (int i = 0; i < arrLen; i++)
    {
        if (strcmp(arr[i], bra) == 0)
        {
            for (int j = 0; j < arr[i][j]; j++)
            {
                if (arr[i][j] == 'A' || arr[i][j] == 'a' || arr[i][j] == 'E' || arr[i][j] == 'e' || arr[i][j] == 'I' || arr[i][j] == 'i' || arr[i][j] == 'O' || arr[i][j] == 'o' || arr[i][j] == 'U' || arr[i][j] == 'u')
                {
                    arr[i][j] = sym;
                }
            }
        }
    }
}

// Print new array - Function.
void printNewArrayFun(char arr[][25], int arrLen, char bra[25], char sym)
{
    replaceCharactersFun(arr, arrLen, bra, sym);

    printf("\nBrands after replacing vowels:\n");
    for (int i = 0; i < arrLen; i++)
    {
        printf("%s\n", arr[i]);
    }
}
//* End Function ..
