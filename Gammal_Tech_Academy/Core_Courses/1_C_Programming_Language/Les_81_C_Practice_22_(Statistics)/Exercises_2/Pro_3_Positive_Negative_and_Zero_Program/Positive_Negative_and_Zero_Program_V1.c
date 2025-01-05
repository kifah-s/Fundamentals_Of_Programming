

//* Positive Negative and Zero Program (Version 1).

/*
* Create a program to take 'n' numbers as input and,
* calculate the count of positive, negative, and zero numbers.

! Input:
! Please enter the number of numbers: 5
! Please enter num 1: 0
! Please enter num 2: 1
! Please enter num 3: 2
! Please enter num 4: -3
! Please enter num 5: -4

! Output:
! Positive: 2
! Negative: 2
! Zero: 1
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int numOfNum, int num[], int posCou, int negCou, int zerCou);

int main()
{
    // Declare Variables.
    int numberOfNumbers = 0, numbers[10], positiveCounter = 0, negativeCounter = 0, zeroCounter = 0;

    // Call Functions.
    resultFun(numberOfNumbers, numbers, positiveCounter, negativeCounter, zeroCounter);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Positive Negative and Zero Program (Version 1) ..\n\n");
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

// Check Positive Number - Function.
int checkPositiveNumberFun(int numOfNum, int num[], int posCou)
{
    for (int i = 0; i < numOfNum; i++)
    {
        if (num[i] > 0)
        {
            posCou++;
        }
    }

    return posCou;
}

// Check Negative Number - Function.
int checkNegativeNumberFun(int numOfNum, int num[], int negCou)
{
    for (int i = 0; i < numOfNum; i++)
    {
        if (num[i] < 0)
        {
            negCou++;
        }
    }

    return negCou;
}

// Check Zero Number - Function.
int checkZeroNumberFun(int numOfNum, int num[], int zerCou)
{
    for (int i = 0; i < numOfNum; i++)
    {
        if (num[i] == 0)
        {
            zerCou++;
        }
    }

    return zerCou;
}

// Result - Function.
void resultFun(int numOfNum, int num[], int posCou, int negCou, int zerCou)
{
    printWelcomeMessageFun();
    numOfNum = gitNumberOfNumbersFun(numOfNum);
    gitNumberFun(num, numOfNum);
    posCou = checkPositiveNumberFun(numOfNum, num, posCou);
    negCou = checkNegativeNumberFun(numOfNum, num, negCou);
    zerCou = checkZeroNumberFun(numOfNum, num, zerCou);

    printf("\nPositive: %d\n", posCou);
    printf("Negative: %d\n", negCou);
    printf("Zero: %d\n\n", zerCou);
}
//* End Function ..
