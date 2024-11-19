

//* Number and Size Program (Version 1).

/*
 * Modify the program to get number and size of array and target from user
 */

/*
! Input:
! Please enter a Size of Array: 5
! Please enter 5 Numbers:
! Num 1: 1
! Num 2: 5
! Num 3: 5
! Num 4: 3
! Num 5: 2
! Please enter a Number: 5

! Output:
! Found at index: 1
! Found at index: 2
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int num, int arr[], int sizeOfArr, int fou);

int main()
{
    // Declare Variables.
    int sizeOfArray, myArray[sizeOfArray], myNumber = 0, found = 0;

    // Call Functions.
    resultFun(myNumber, myArray, sizeOfArray, found);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Number and Size Program (Version 1) ..\n\n");
}

// Receive Size Of Array - Function.
int receiveSizeOfArrayFun(int sizeOfArr)
{
    printf("Please enter a Size of Array: ");
    scanf("%d", &sizeOfArr);

    return sizeOfArr;
}

// Receive Number Of Array - Function.
void receiveNumberOfArrayFun(int sizeOfArr, int arr[])
{
    printf("Please enter a %d Numbers:\n", sizeOfArr);
    for (int i = 0; i < sizeOfArr; i++)
    {
        printf("Num %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Receive Number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a Number: ");
    scanf("%d", &num);

    return num;
}

// Positions Number - Function.
int positionsNumberFun(int num, int arr[], int sizeOfArr, int fou)
{
    for (int i = 0; i < sizeOfArr; i++)
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
void resultFun(int num, int arr[], int sizeOfArr, int fou)
{
    welcomeMessageFun();
    sizeOfArr = receiveSizeOfArrayFun(sizeOfArr);
    receiveNumberOfArrayFun(sizeOfArr, arr);
    num = receiveNumberFun(num);
    positionsNumberFun(num, arr, sizeOfArr, fou);

    printf("\n\n");
}
//* End Function ..
