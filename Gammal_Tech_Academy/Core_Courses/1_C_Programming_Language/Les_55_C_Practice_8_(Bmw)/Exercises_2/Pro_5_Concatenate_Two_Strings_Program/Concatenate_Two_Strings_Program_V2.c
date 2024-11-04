

//* Concatenate Two Strings Program (Version 2).

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
void printNewStringFun(char arr[][25], int ind1, int ind2);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Arrays and Variables.
    char brandMenu[][25] = {"Mercedes", "BMW", "Mazda", "Mercedes", "BMW", "Mercedes"};
    int arrLength = sizeof(brandMenu) / sizeof(brandMenu[0]);
    int index1, index2;

    // Call Functions.
    printNewStringFun(brandMenu, index1, index2);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Concatenate Two Strings Program (Version 2) ..\n\n");
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
void concatenateStringsFun(char arr[][25], int ind1, int ind2)
{
    strcat(arr[ind1], arr[ind2]);
}

// Print new string - Function.
void printNewStringFun(char arr[][25], int ind1, int ind2)
{
    ind1 = receiveIndex1Fun(ind1);
    ind2 = receiveIndex2Fun(ind2);

    concatenateStringsFun(arr, ind1, ind2);

    printf("\nConcatenate Strings: %s", arr[ind1]);
}
//* End Function ..
