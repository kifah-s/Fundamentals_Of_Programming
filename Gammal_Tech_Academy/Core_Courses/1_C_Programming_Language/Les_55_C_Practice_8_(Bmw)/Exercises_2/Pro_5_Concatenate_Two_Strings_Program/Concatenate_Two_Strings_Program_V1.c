

//* Concatenate Two Strings Program (Version 1).

/*
 * Write a program to concatenate two strings from the given array and display the result.
 */

/*
! Input:
! Please enter the indices to concatenate :
! 1: index: 1
! 2: index: 3

! Output:
! Concatenate Strings: BMWMercedes
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printNewStringFun(char arr[][25], int arrLen, char newStr[50]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Arrays and Variables.
    char brandMenu[][25] = {"Mercedes", "BMW", "Mazda", "Mercedes", "BMW", "Mercedes"};
    int arrLength = sizeof(brandMenu) / sizeof(brandMenu[0]);
    char newString[50];

    // Call Functions.
    printNewStringFun(brandMenu, arrLength, newString);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Concatenate Two Strings Program (Version 1) ..\n\n");
}

// Receive index 1 from user - Function.
int receiveIndex1Fun(int ind1)
{
    printf("Please enter the indices to concatenate:\n");
    printf("1: index: ");
    scanf("%d", &ind1);

    return ind1;
}

// Receive index 2 from user - Function.
int receiveIndex2Fun(int ind2)
{
    printf("2: index: ");
    scanf("%d", &ind2);

    return ind2;
}

// Concatenate strings - Function.
void concatenateStringsFun(char arr[][25], int arrLen, char newStr[50])
{
    int ind1, ind2;
    char brand1[25], brand2[25];
    char newString[50];

    ind1 = receiveIndex1Fun(ind1);
    ind2 = receiveIndex2Fun(ind2);

    for (int i = 0; i < arrLen; i++)
    {
        if (ind1 == i)
        {
            strcpy(brand1, arr[i]);
        }
        if (ind2 == i)
        {
            strcpy(brand2, arr[i]);
        }
    }

    strcpy(newStr, strcat(brand1, brand2));
}

// Print new string - Function.
void printNewStringFun(char arr[][25], int arrLen, char newStr[50])
{
    concatenateStringsFun(arr, arrLen, newStr);

    printf("\nConcatenate Strings: %s", newStr);
}
//* End Function ..
