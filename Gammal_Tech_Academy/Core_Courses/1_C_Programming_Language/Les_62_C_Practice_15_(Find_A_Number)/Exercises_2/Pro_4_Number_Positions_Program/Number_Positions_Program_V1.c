

//* Number Positions Program (Version 1).

/*
 * Modify the program to print the indices (positions) where the target number is found in the array.
 */

/*
! Input:
! Please enter a Number: 90

! Output:
! Found at index: 3
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int num, int arr[], int arrLen, int fou);

int main()
{
    // Declare Variables.
    int myArray[] = {8, 5, 6, 90, 3, 1, 90}, myNumber = 0, found = 0;
    int arrLen = sizeof(myArray) / sizeof(myArray[0]);

    // Call Functions.
    resultFun(myNumber, myArray, arrLen, found);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Number Positions Program (Version 1) ..\n\n");
}

// Receive Number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a Number: ");
    scanf("%d", &num);

    return num;
}

// Positions Number - Function.
int positionsNumberFun(int num, int arr[], int arrLen, int fou)
{
    for (int i = 0; i < arrLen; i++)
    {
        if (arr[i] == num)
        {
            fou = 1;
            printf("\nFound at Positions: %d", i);
        }
    }

    if (!fou)
    {
        printf("\nNot Found");
    }
}

// Print Result - Function.
void resultFun(int num, int arr[], int arrLen, int fou)
{
    welcomeMessageFun();
    num = receiveNumberFun(num);
    positionsNumberFun(num, arr, arrLen, fou);

    printf("\n\n");
}
//* End Function ..
