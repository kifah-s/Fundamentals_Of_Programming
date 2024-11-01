

//* Sum Of Position Program (Version 1).

/*
 * Write a program that counts the occurrences of a specific car brand,
 * and calculates the sum of their positions within a user-defined range.
 */

/*
! Input:
! Please enter brand: BMW
! Please enter the range:
! Start: 2
! End: 6

! Output:
! Number of car of brand BMW in the range: 2
! Sum of position: 7
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printCounterAndSumPosFun(char bra[25], int ranSta, int ranEnd, int arrLen, char arr[][25], int cou, int sumPoi);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array.
    char myArray[][25] = {"Mercedes", "BMW", "Mazda", "Mercedes", "BMW", "Mercedes"};
    int arrLength = sizeof(myArray) / sizeof(myArray[0]);

    // Declare Variables.
    char myBrand[25];
    int counter = 0, RangeStart = 0, rangeEnd = 0, sumPosition = 0;

    // Call Functions.
    printCounterAndSumPosFun(myBrand, RangeStart, rangeEnd, arrLength, myArray, counter, sumPosition);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum Of Position Program (Version 1) ..\n\n");
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
    for (int i = ranSta - 1; i < ranEnd; i++)
    {
        if (strcmp(bra, arr[i]) == 0)
        {
            cou++;
        }
    }

    return cou;
}

// Sum position - Function.
int sumPositionFun(char bra[25], int ranSta, int ranEnd, int arrLen, char arr[][25], int sumPos)
{
    for (int i = ranSta - 1; i < ranEnd; i++)
    {
        if (strcmp(bra, arr[i]) == 0)
        {
            sumPos = sumPos + (i + 1);
        }
    }

    return sumPos;
}

// Print counter and sum position of brand - Function.
void printCounterAndSumPosFun(char bra[25], int ranSta, int ranEnd, int arrLen, char arr[][25], int cou, int sumPos)
{
    receiveBrandFun(bra);
    ranSta = receiveRangeStartFun(ranSta);
    ranEnd = receiveRangeEndFun(ranEnd);

    cou = searchForBrandFun(bra, ranSta, ranEnd, arrLen, arr, cou);
    sumPos = sumPositionFun(bra, ranSta, ranEnd, arrLen, arr, sumPos);

    printf("\nNumber of car of brand %s: %d", bra, cou);
    printf("\nSum of position: %d", sumPos);
}
//* End Function ..
