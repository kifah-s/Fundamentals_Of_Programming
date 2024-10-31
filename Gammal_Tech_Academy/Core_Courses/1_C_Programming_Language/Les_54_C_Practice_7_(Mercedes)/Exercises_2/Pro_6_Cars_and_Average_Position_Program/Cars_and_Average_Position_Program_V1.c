

//* Cars and Average Position Program (Version 1).

/*
 * Write a program that counts the occurrences of a specific car brand and calculates their average position.
 */

/*
! Input:
! Please enter brand: BMW

! Output:
! Average position of cars of brand BMW: 3.50
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printAverageFun(char bra[25], int arrLen, char arr[][25], int cou, int sum, float ave);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array and Variables.
    char myArray[][25] = {"Mercedes", "BMW", "Mazda", "Mercedes", "BMW", "Mercedes"};
    int arrLength = sizeof(myArray) / sizeof(myArray[0]);
    char myBrand[25];
    int count = 0, sum = 0;
    float average = 0;

    // Call Functions.
    printAverageFun(myBrand, arrLength, myArray, count, sum, average);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Cars and Average Position Program (Version 1) ..\n\n");
}

// Receive brand - Function.
void receiveBrandFun(char bra[25])
{
    printf("Please enter brand: ");
    scanf("%s", bra);
}

// Count brand - Function.
int countBrandFun(char bra[25], int arrLen, char arr[][25], int cou)
{
    receiveBrandFun(bra);

    for (int i = 0; i < arrLen; i++)
    {
        if (strcmp(bra, arr[i]) == 0)
        {
            cou++;
        }
    }

    return cou;
}

// Sum positions - Function.
int sumPositionsFun(char bra[25], int arrLen, char arr[][25], int sum)
{
    for (int i = 0; i < arrLen; i++)
    {
        if (strcmp(bra, arr[i]) == 0)
        {
            sum = sum + (i + 1);
        }
    }

    return sum;
}

// Calculate average - Function.
float calculateAverageFun(int cou, int sum, float ave)
{
    ave = (float)sum / cou;

    return ave;
}

// Print Average of brand - Function.
void printAverageFun(char bra[25], int arrLen, char arr[][25], int cou, int sum, float ave)
{
    cou = countBrandFun(bra, arrLen, arr, cou);
    sum = sumPositionsFun(bra, arrLen, arr, sum);

    if (cou > 0)
    {
        ave = calculateAverageFun(cou, sum, ave);
        printf("\nAverage position of cars of brand %s: %0.2f", bra, ave);
    }
    else
    {
        printf("\nNo cars found of brand %s", bra);
    }
}
//* End Function ..
