

//* Specific Number Program (Version 1).

/*
* Create a program to perform a linear search in an array to find a specific number.

! Input:
! Please enter number of numbers: 4
! Please enter num 1: 1
! Please enter num 2: 5
! Please enter num 3: 9
! Please enter num 4: 7

! Please enter number to search for it: 5

! Output:
! Found number 5 at index 1.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int numOfNums, int myNums[], int speNum);

int main()
{
    // Declare Variables.
    int numberOfNumbers = 0, specificNumber = 0, myNumbers[5];

    // Call Functions.
    resultFun(numberOfNumbers, myNumbers, specificNumber);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Specific Number Program (Version 1) ..\n\n");
}

// Git Number of Numbers - Function.
int gitNumberOfNumbersFun(int numOfNums)
{
    printf("Please enter number of numbers: ");
    scanf("%d", &numOfNums);

    return numOfNums;
}

// Git Numbers - Function.
void gitNumbersFun(int numOfNums, int myNums[])
{
    for (int i = 0; i < numOfNums; i++)
    {
        printf("Please enter num %d: ", i + 1);
        scanf("%d", &myNums[i]);
    }

    // printf("\nNumbers: \n");
    // for (int i = 0; i < numOfNums; i++)
    // {
    //     printf("%d  ", myNums[i]);
    // }
}

// Git Specific Number - Function.
int gitSpecificNumberFun(int speNum)
{
    printf("\nPlease enter number to search for it: ");
    scanf("%d", &speNum);

    return speNum;
}

// Search For Specific Number - Function.
void searchForSpecificNumberFun(int numOfNums, int speNum, int myNums[])
{
    bool found = false;
    for (int i = 0; i < numOfNums; i++)
    {
        if (myNums[i] == speNum)
        {
            printf("Found number %d at index %d.\n\n", speNum, i);
            found = true;
        }
    }

    if (found == false)
    {
        printf("Not Found number %d in the array.\n\n", speNum);
    }
}

// Result - Function.
void resultFun(int numOfNums, int myNums[], int speNum)
{
    printWelcomeMessageFun();
    numOfNums = gitNumberOfNumbersFun(numOfNums);
    gitNumbersFun(numOfNums, myNums);
    speNum = gitSpecificNumberFun(speNum);
    searchForSpecificNumberFun(numOfNums, speNum, myNums);
}
//* End Function ..
