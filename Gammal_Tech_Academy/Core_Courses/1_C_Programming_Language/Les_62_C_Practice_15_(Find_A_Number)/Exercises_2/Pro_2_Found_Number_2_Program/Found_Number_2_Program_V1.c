

//* Found Number 2 Program (Version 1).

/*
 * Modify the previous program to handle the case when the number is not the first element in the array.
 */

/*
! Input:
! Please enter a Number: 6

! Output:
! Found.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int num, int arr[], int arrLen, bool fouNum);

int main()
{
    // Declare Variables.
    int myArray[] = {8, 5, 6, 90, 3, 1}, myNumber = 0;
    int arrLen = sizeof(myArray) / sizeof(myArray[0]);
    bool foundNumber = false;

    // Call Functions.
    resultFun(myNumber, myArray, arrLen, foundNumber);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Found Number 2 Program (Version 1) ..\n\n");
}

// Receive Number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a Number: ");
    scanf("%d", &num);

    return num;
}

// Check Number - Function.
bool checkNumberFun(int num, int arr[], int arrLen, bool fouNum)
{
    for (int i = 0; i < arrLen; i++)
    {
        if (arr[i] == num)
        {
            fouNum = true;
            break;
        }
    }

    return fouNum;
}

// Found Number Or Not - Function.
void foundNumberOrNotFun(bool fouNum)
{
    if (fouNum == true)
    {
        printf("\nFound\n\n");
    }
    else
    {
        printf("\nNot Found\n\n");
    }
}

// Print Result - Function.
void resultFun(int num, int arr[], int arrLen, bool fouNum)
{
    welcomeMessageFun();
    num = receiveNumberFun(num);
    fouNum = checkNumberFun(num, arr, arrLen, fouNum);
    foundNumberOrNotFun(fouNum);
}
//* End Function ..
