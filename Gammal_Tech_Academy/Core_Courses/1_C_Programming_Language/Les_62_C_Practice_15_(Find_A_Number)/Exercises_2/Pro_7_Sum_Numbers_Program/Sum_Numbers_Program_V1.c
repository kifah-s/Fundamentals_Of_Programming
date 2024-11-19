

//* Sum Numbers Program (Version 1).

/*
 * Modify the program to find and print the sum of all numbers in the array.
 */

/*
! Input:
! Please enter a Size of Array: 4
! Please enter 4 Numbers:
! Num 1: 1
! Num 2: 2
! Num 3: 5
! Num 4: 9

! Output:
! Sum Of Numbers: 17
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int arr[], int sizeOfArr, int sum);

int main()
{
    // Declare Variables.
    int sizeOfArray, myArray[sizeOfArray], sumNumbers = 0;

    // Call Functions.
    resultFun(myArray, sizeOfArray, sumNumbers);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum Numbers Program (Version 1) ..\n\n");
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

// Sum Number - Function.
int sumNumberFun(int arr[], int sizeOfArr, int sum)
{
    for (int i = 0; i < sizeOfArr; i++)
    {
        sum = sum + arr[i];
    }

    printf("\nSum Of Numbers: %d", sum);
}

// Print Result - Function.
void resultFun(int arr[], int sizeOfArr, int sum)
{
    welcomeMessageFun();
    sizeOfArr = receiveSizeOfArrayFun(sizeOfArr);
    receiveNumberOfArrayFun(sizeOfArr, arr);
    sumNumberFun(arr, sizeOfArr, sum);

    printf("\n\n");
}
//* End Function ..
