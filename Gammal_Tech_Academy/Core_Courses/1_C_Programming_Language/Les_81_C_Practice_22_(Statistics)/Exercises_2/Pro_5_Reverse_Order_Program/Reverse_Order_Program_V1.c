

//* Reverse Order Program (Version 1).

/*
* Create a program to take 'n' numbers as input and print the numbers in reverse order.

! Input:
! Please enter the number of numbers: 4
! Please enter num 1: 1
! Please enter num 2: 5
! Please enter num 3: 3
! Please enter num 4: 8

! Output:
! Numbers is reverse order: 8 3 5 1
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int numOfNum, int num[]);

int main()
{
    // Declare Variables.
    int numberOfNumbers = 0, number[10];

    // Call Functions.
    resultFun(numberOfNumbers, number);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Reverse Order Program (Version 1) ..\n\n");
}

// Git Number Of Numbers - Function.
int gitNumberOfNumbersFun(int numOfNum)
{
    printf("Please enter Number of Numbers: ");
    scanf("%d", &numOfNum);

    return numOfNum;
}

// Git Number - Function.
void gitNumberFun(int numOfNum, int num[])
{
    for (int i = 0; i < numOfNum; i++)
    {
        printf("Please enter num %d: ", i + 1);
        scanf("%d", &num[i]);
    }
}

// Print Revers Order - Function.
void printReversOrderFun(int numOfNum, int num[])
{
    printf("\nRevers Order: ");
    for (int i = numOfNum - 1; i >= 0; i--)
    {
        printf("%d ", num[i]);
    }
}

// Result - Function.
void resultFun(int numOfNum, int num[])
{
    printWelcomeMessageFun();
    numOfNum = gitNumberOfNumbersFun(numOfNum);
    gitNumberFun(numOfNum, num);
    printReversOrderFun(numOfNum, num);
}
//* End Function ..
