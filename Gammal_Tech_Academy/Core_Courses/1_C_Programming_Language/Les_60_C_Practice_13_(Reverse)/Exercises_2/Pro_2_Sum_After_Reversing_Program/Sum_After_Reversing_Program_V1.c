

//* Sum After Reversing Program (Version 1).

/*
 * Write a program to find the sum of digits after reversing a given number.
 */

/*
! Input:
! Please enter a number: 9874

! Output:
! Reverse Number: 4789
! Sum of Reverse Number: 28
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void printReverseAndSumNumberFun(int num, int revNum, int sumNum);

int main()
{
    // Declare Variables.
    int number = 0, reverseNumber = 0, sumNumber = 0;

    // Call Functions.
    printReverseAndSumNumberFun(number, reverseNumber, sumNumber);

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum After Reversing Program (Version 1) ..\n\n");
}

// Receive number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Reverse Number - Function.
int reverseNumberFun(int num, int revNum)
{
    int digit = 0;
    while (num)
    {
        digit = num % 10;
        revNum = revNum * 10 + digit;
        num = num / 10;
    }

    return revNum;
}

// Sum number - Function.
int sumNumberFun(int revNum, int sumNum)
{
    int digit = 0;
    while (revNum)
    {
        digit = revNum % 10;
        sumNum = sumNum + digit;
        revNum = revNum / 10;
    }

    return sumNum;
}

// Print Reverse and sum Number - Function.
void printReverseAndSumNumberFun(int num, int revNum, int sumNum)
{
    welcomeMessageFun();
    num = receiveNumberFun(num);
    revNum = reverseNumberFun(num, revNum);
    sumNum = sumNumberFun(revNum, sumNum);

    printf("\nReverse Number: %d\n", revNum);
    printf("Sum of Reverse Number: %d\n\n", sumNum);
}
//* End Function ..
