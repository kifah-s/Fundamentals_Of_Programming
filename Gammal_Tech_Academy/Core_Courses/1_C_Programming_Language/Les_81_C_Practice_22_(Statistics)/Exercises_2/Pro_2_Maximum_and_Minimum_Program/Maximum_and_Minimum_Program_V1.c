

//* Maximum and Minimum Program (Version 1).

/*
* Write a program that takes 'n' numbers as input from the user,
* and finds the maximum and minimum numbers.

! Input:
! Please enter the number of numbers: 5
! Please enter num 1: 1
! Please enter num 2: 2
! Please enter num 3: 3
! Please enter num 4: 4
! Please enter num 5: 5

! Output:
! Maximum: 5
! Minimum: 1
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int numOfNum, int num[], int couEven, int couOdd);

int main()
{
    // Declare Variables.
    int numberOfNumbers = 0, numbers[10], maximum = 0, minimum = 0;

    // Call Functions.
    resultFun(numberOfNumbers, numbers, maximum, minimum);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Maximum and Minimum Program (Version 1) ..\n\n");
}

// Git Number Of Numbers - Function.
int gitNumberOfNumbersFun(int numOfNum)
{
    printf("Please enter Number of Numbers: ");
    scanf("%d", &numOfNum);

    return numOfNum;
}

// Git Number - Function.
void gitNumberFun(int num[], int numOfNum)
{
    for (int i = 0; i < numOfNum; i++)
    {
        printf("Please enter num %d: ", i + 1);
        scanf("%d", &num[i]);
    }
}

// Check Maximum Number - Function.
int checkMaximumNumberFun(int numOfNum, int num[], int max)
{
    max = num[0];
    for (int i = 0; i < numOfNum; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }

    return max;
}

// Check Minimum Number - Function.
int checkMinimumNumberFun(int numOfNum, int num[], int min)
{
    min = num[0];
    for (int i = 0; i < numOfNum; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }

    return min;
}

// Result - Function.
void resultFun(int numOfNum, int num[], int max, int min)
{
    printWelcomeMessageFun();
    numOfNum = gitNumberOfNumbersFun(numOfNum);
    gitNumberFun(num, numOfNum);
    max = checkMaximumNumberFun(numOfNum, num, max);
    min = checkMinimumNumberFun(numOfNum, num, min);

    printf("\nMaximum: %d\n", max);
    printf("Minimum: %d\n\n", min);
}
//* End Function ..
