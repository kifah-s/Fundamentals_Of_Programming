

//* Counter Number Program (Version 2).

/*
 * Modify the program to count and print the number of occurrences of the target number in the array.
 */

/*
! Input:
! Please enter a Number: 5

! Output:
! Found 1 times.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void foundOrNotFun(int num, int arr[], int arrLen, int couNum);

int main()
{
    // Declare Variables.
    int myArray[] = {8, 5, 6, 90, 3, 1, 90}, myNumber = 0;
    int arrLen = sizeof(myArray) / sizeof(myArray[0]);
    int counterNumber = 0;

    // Call Functions.
    foundOrNotFun(myNumber, myArray, arrLen, counterNumber);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Counter Number Program (Version 2) ..\n\n");
}

// Receive Number - Function.
int receiveNumberFun(int num)
{
    welcomeMessageFun();

    printf("Please enter a Number: ");
    scanf("%d", &num);

    return num;
}

// Count Number - Function.
int countNumberFun(int num, int arr[], int arrLen, int couNum)
{
    num = receiveNumberFun(num);

    for (int i = 0; i < arrLen; i++)
    {
        if (arr[i] == num)
        {
            couNum++;
        }
    }

    return couNum;
}

// Found Or Not - Function.
void foundOrNotFun(int num, int arr[], int arrLen, int couNum)
{
    couNum = countNumberFun(num, arr, arrLen, couNum);

    if (couNum > 0)
    {
        printf("\nFound %d times.\n\n", couNum);
    }
    else
    {
        printf("\nNot Found\n\n");
    }
}

//* End Function ..
