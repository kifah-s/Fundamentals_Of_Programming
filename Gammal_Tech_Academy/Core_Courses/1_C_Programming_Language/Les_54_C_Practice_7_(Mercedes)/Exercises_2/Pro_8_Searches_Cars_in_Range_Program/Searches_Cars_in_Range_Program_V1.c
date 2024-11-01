

//* Searches Cars in Range Program (Version 1).

/*
 * Write a program that counts the occurrences of a specific car brand within a user-defined range,
 * using a function.
 */

/*
! Input:
! Please enter brand: BMW
! Please enter the range:
! Start: 2
! End: 3

! Output:
! Number of car of brand BMW in the range: 1
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printCounterFun(char bra[25], int ranSta, int ranEnd, int arrLen, char arr[][25], int cou);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array.
    char myArray[][25] = {"Mercedes", "BMW", "Mazda", "Mercedes", "BMW", "Mercedes"};
    int arrLength = sizeof(myArray) / sizeof(myArray[0]);

    // Declare Variables.
    char myBrand[25];
    int counter = 0, RangeStart = 0, rangeEnd = 0;

    // Call Functions.
    printCounterFun(myBrand, RangeStart, rangeEnd, arrLength, myArray, counter);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Searches Cars in Range Program (Version 1) ..\n\n");
}

// Receive brand - Function.
void receiveBrandFun(char bra[25])
{
    printf("Please enter brand: ");
    scanf("%s", bra);
}

// Receive range start - Function.
int receiveRangeStartFun(int ranSta)
{
    printf("Please enter the range:\n");

    printf("Start: ");
    scanf("%d", &ranSta);

    return ranSta;
}

// Receive range End - Function.
int receiveRangeEndFun(int ranEnd)
{
    printf("End: ");
    scanf("%d", &ranEnd);

    return ranEnd;
}

// Search for brand - Function.
int searchForBrandFun(char bra[25], int ranSta, int ranEnd, int arrLen, char arr[][25], int cou)
{
    receiveBrandFun(bra);
    ranSta = receiveRangeStartFun(ranSta);
    ranEnd = receiveRangeEndFun(ranEnd);

    for (int i = ranSta; i <= ranEnd; i++)
    {
        if (strcmp(bra, arr[i]) == 0)
        {
            cou++;
        }
    }

    return cou;
}

// Print counter of brand - Function.
void printCounterFun(char bra[25], int ranSta, int ranEnd, int arrLen, char arr[][25], int cou)
{
    cou = searchForBrandFun(bra, ranSta, ranEnd, arrLen, arr, cou);

    printf("\nNumber of car of brand %s: %d", bra, cou);
}
//* End Function ..
