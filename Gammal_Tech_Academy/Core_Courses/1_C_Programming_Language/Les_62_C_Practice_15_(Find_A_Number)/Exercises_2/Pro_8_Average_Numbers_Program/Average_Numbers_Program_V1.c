

//* Average Numbers Program (Version 1).

/*
 * Modify the program to find and print the average of all numbers in the array.
 */

/*
! Input:
! Please enter a Size of Array: 5
! Please enter 5 Numbers:
! Num 1: 1
! Num 2: 2
! Num 3: 3
! Num 4: 4
! Num 4: 5

! Output:
! Average Of Numbers: 3.00
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int arr[], int sizeOfArr, float ave);

int main()
{
    // Declare Variables.
    int sizeOfArray, myArray[sizeOfArray];
    float averageNumbers = 0;

    // Call Functions.
    resultFun(myArray, sizeOfArray, averageNumbers);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Average Numbers Program (Version 1) ..\n\n");
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

// Average Number - Function.
int averageNumberFun(int arr[], int sizeOfArr, float ave)
{
    int sum = 0;
    for (int i = 0; i < sizeOfArr; i++)
    {
        sum = sum + arr[i];
    }

    ave = sum / sizeOfArr;

    printf("\nAverage Of Numbers: %0.2f", ave);
}

// Print Result - Function.
void resultFun(int arr[], int sizeOfArr, float ave)
{
    welcomeMessageFun();
    sizeOfArr = receiveSizeOfArrayFun(sizeOfArr);
    receiveNumberOfArrayFun(sizeOfArr, arr);
    averageNumberFun(arr, sizeOfArr, ave);

    printf("\n\n");
}
//* End Function ..
