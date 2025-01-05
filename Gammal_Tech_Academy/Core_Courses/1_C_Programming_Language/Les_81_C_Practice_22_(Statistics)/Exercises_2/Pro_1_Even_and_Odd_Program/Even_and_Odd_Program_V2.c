

//* Even and Odd Program (Version 2).

/*
* Write a program that takes 'n' numbers as input from the user,
* and calculates and prints the count of even and odd numbers.

! Input:
! Please enter the number of numbers: 5
! Please enter num 1: 1
! Please enter num 2: 2
! Please enter num 3: 5
! Please enter num 4: 6
! Please enter num 5: 7

! Output:
! Count of even numbers: 2
! Count of odd numbers: 3
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int numOfNum, int num[], int couEven, int couOdd);

int main()
{
    // Declare Variables.
    int numberOfNumbers = 0, numbers[10], countOfEven = 0, countOfOdd = 0;

    // Call Functions.
    resultFun(numberOfNumbers, numbers, countOfEven, countOfOdd);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Even and Odd Program (Version 2) ..\n\n");
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

// Check Even Number - Function.
int checkEvenNumberFun(int num[], int numOfNum, int couEven)
{
    for (int i = 0; i < numOfNum; i++)
    {
        if (num[i] % 2 == 0)
        {
            couEven++;
        }
    }

    return couEven;
}

// Check Odd Number - Function.
int checkOddNumberFun(int num[], int numOfNum, int couOdd)
{
    for (int i = 0; i < numOfNum; i++)
    {
        if (num[i] % 2 != 0)
        {
            couOdd++;
        }
    }

    return couOdd;
}

// Result - Function.
void resultFun(int numOfNum, int num[], int couEven, int couOdd)
{
    printWelcomeMessageFun();
    numOfNum = gitNumberOfNumbersFun(numOfNum);
    gitNumberFun(num, numOfNum);
    couEven = checkEvenNumberFun(num, numOfNum, couEven);
    couOdd = checkOddNumberFun(num, numOfNum, couOdd);

    printf("\nCount of even numbers: %d\n", couEven);
    printf("Count of odd numbers: %d\n\n", couOdd);
}
//* End Function ..
