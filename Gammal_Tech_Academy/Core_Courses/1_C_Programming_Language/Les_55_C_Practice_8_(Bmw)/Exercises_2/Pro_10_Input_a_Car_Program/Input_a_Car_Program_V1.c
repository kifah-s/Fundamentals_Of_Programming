

//* Input a Car Program (Version 1).

/*
 * Write a program that allows users to input a car brand name,
 * and counts the occurrences of that brand in a predefined list of car brands.
 * The program should be case-insensitive and convert both user input,
 * and stored brand names to lowercase.
 * Use the provided code as a reference.
 */

/*
! Input:
! Please enter a brand: merCedEs

! Output:
! counter: 3
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printCounterFun(char arr[][25], int arrLen, char bra[25], int cou);
int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Arrays and Variables.
    char brandMenu[][25] = {"Mercedes", "BMW", "Mazda", "Mercedes", "BMW", "Mercedes"};
    int arrLength = sizeof(brandMenu) / sizeof(brandMenu[0]);
    char brand[25];
    int counter = 0;

    // Call Functions.
    printCounterFun(brandMenu, arrLength, brand, counter);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Input a Car Program (Version 1) ..\n\n");
}

// Receive brand from user - Function.
void ReceiveBrandFun(char bra[25])
{
    printf("Please enter a brand: ");
    scanf("%s", bra);
}

// Counter brand - Function.
int counterBrandFun(char arr[][25], int arrLen, char bra[25], int cou)
{
    ReceiveBrandFun(bra);

    for (int i = 0; i < arrLen; i++)
    {
        if (strcasecmp(arr[i], bra) == 0)
        {
            cou++;
        }
    }

    return cou;
}

// Print counter - Function.
void printCounterFun(char arr[][25], int arrLen, char bra[25], int cou)
{
    cou = counterBrandFun(arr, arrLen, bra, cou);

    printf("\ncounter: %d\n", cou);
}
//* End Function ..
