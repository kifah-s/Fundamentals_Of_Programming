

//* Maximum And Minimum 8 Program (Version 1).

/*
* Write a program to find the maximum and minimum elements in an array of 5 integers.

! Input:
! Please Enter 5 Numbers:
! Num 1: 9
! Num 2: 5
! Num 3: 6
! Num 4: 3
! Num 5: 1

! Output:
! Maximum Element: 9
! Minimum Element: 1
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int myNum[], int len, int max, int min);

int main()
{
    // Declare Variables.
    int myNumbers[5];
    int maximumNumber = 0, minimumNumber = 0;
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);

    // Call Functions.
    resultFun(myNumbers, length, maximumNumber, minimumNumber);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Maximum And Minimum 8 Program (Version 1) ..\n\n");
}

// Get Numbers - Function.
void getNumbersFun(int myNum[], int len)
{
    printf("Please enter 5 numbers: \n");
    for (int i = 0; i < len; i++)
    {
        printf("num %d: ", i + 1);
        scanf("%d", &myNum[i]);
    }
}

// Find Maximum Number - Function.
int findMaximumNumberFun(int myNum[], int len, int max)
{
    max = myNum[0];
    for (int i = 0; i < len; i++)
    {
        if (myNum[i] > max)
        {
            max = myNum[i];
        }
    }

    return max;
}

// Find Minimum Number - Function.
int findMinimumNumberFun(int myNum[], int len, int min)
{
    min = myNum[0];
    for (int i = 0; i < len; i++)
    {
        if (myNum[i] < min)
        {
            min = myNum[i];
        }
    }

    return min;
}

// Result - Function.
void resultFun(int myNum[], int len, int max, int min)
{
    printWelcomeMessageFun();
    getNumbersFun(myNum, len);
    max = findMaximumNumberFun(myNum, len, max);
    min = findMinimumNumberFun(myNum, len, min);

    printf("Maximum Element: %d\n", max);
    printf("Minimum Element: %d\n\n", min);
}
//* End Function ..
