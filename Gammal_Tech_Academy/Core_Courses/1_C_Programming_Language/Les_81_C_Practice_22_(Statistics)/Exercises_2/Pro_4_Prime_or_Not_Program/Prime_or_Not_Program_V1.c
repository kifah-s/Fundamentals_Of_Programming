

//* Prime or Not Program (Version 1).

/*
* Write a program to take 'n' numbers as input,
* and determine whether each number is prime or not.

! Input & Output:
! Please enter the number of numbers: 3

! Please enter num 1: 1
! 1 is not prime.

! Please enter num 2: 5
! 5 is not prime.

! Please enter num 3: 3
! 3 is not prime.

*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int numOfNum, int num, bool pri);

int main()
{
    // Declare Variables.
    int numberOfNumbers = 0, number = 0;
    bool prime = true;

    // Call Functions.
    resultFun(numberOfNumbers, number, prime);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Prime or Not Program (Version 1) ..\n\n");
}

// Git Number Of Numbers - Function.
int gitNumberOfNumbersFun(int numOfNum)
{
    printf("Please enter Number of Numbers: ");
    scanf("%d", &numOfNum);

    return numOfNum;
}

// Git Number - Function.
int gitNumberFun(int num, int i)
{
    printf("Please enter num %d: ", i + 1);
    scanf("%d", &num);

    return num;
}

// Check Number - Function.
void checkNumberFun(int num, bool pri)
{
    if (num <= 1)
    {
        pri = false;
    }
    else
    {
        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                pri = false;
                break;
            }
        }
    }

    if (pri == true)
    {
        printf("%d is Prime.\n\n", num);
    }
    else
    {
        printf("%d is Not Prime.\n\n", num);
    }
}

// Result - Function.
void resultFun(int numOfNum, int num, bool pri)
{
    printWelcomeMessageFun();
    numOfNum = gitNumberOfNumbersFun(numOfNum);
    for (int i = 0; i < numOfNum; i++)
    {
        num = gitNumberFun(num, i);
        checkNumberFun(num, pri);
    }
}
//* End Function ..
