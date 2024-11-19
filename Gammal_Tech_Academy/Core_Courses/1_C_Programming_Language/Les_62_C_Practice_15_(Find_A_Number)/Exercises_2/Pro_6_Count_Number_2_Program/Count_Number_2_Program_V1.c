

//* Count Number 2 Program (Version 1).

/*
 * Modify the program to count and print the total occurrences of all numbers in the array.
 */

/*
! Input:
! Please enter a Size of Array: 5
! Please enter 5 Numbers:
! Num 1: 2
! Num 2: 3
! Num 3: 6
! Num 4: 6
! Num 5: 6
! Please enter a Number: 6

! Output:
! Found 3 times
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int num, int arr[], int sizeOfArr, int cou);

int main()
{
    // Declare Variables.
    int sizeOfArray, myArray[sizeOfArray], myNumber = 0, counter = 0;

    // Call Functions.
    resultFun(myNumber, myArray, sizeOfArray, counter);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Count Number 2 Program (Version 1) ..\n\n");
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

// Count Number - Function.
int countNumberFun(int num, int arr[], int sizeOfArr, int cou)
{
    for (int i = 0; i < sizeOfArr; i++)
    {
        if (arr[i] == num)
        {
            cou++;
        }
    }

    return cou;
}

// Check Counter - Function.
void checkCounterFun(int cou)
{
    if (cou > 0)
    {
        printf("\nFound %d times.", cou);
    }
    else
    {
        printf("\nNot found number.");
    }
}

// Print Result - Function.
void resultFun(int num, int arr[], int sizeOfArr, int cou)
{
    welcomeMessageFun();
    sizeOfArr = receiveSizeOfArrayFun(sizeOfArr);
    receiveNumberOfArrayFun(sizeOfArr, arr);
    num = receiveNumberFun(num);
    cou = countNumberFun(num, arr, sizeOfArr, cou);
    checkCounterFun(cou);

    printf("\n\n");
}
//* End Function ..
