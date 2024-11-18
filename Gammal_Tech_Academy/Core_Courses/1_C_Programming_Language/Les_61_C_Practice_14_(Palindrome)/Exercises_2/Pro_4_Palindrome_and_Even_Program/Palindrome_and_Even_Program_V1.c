

//* Palindrome and Even Program (Version 1).

/*
 * Create a program to check if a given number is a palindrome and its sum of digits is even.
 */

/*
! Input:
! Please enter a Number: 565

! Output:
! Reverse: 565
! Palindrome and sum of digits is even.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void printResultFun(int num, int revNum, int sum);

int main()
{
    // Declare Variables.
    int myNumber = 0, reverseNumber = 0, sum = 0;

    // Call Functions.
    printResultFun(myNumber, reverseNumber, sum);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Palindrome and Even Program (Version 1) ..\n\n");
}

// Receive Number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Reverse Number - Function.
int reverseNumberFun(int num, int revNum)
{
    int dig = 0;

    while (num)
    {
        dig = num % 10;
        revNum = (revNum * 10) + dig;
        num = num / 10;
    }
    printf("Reverse: %d\n", revNum);

    return revNum;
}

// Check Numbers - Function.
void checkNumbersFun(int num, int revNum)
{
    if (num == revNum)
    {
        printf("Palindrome, ");
    }
    else
    {
        printf("Not Palindrome, ");
    }
}

// Sum Digit - Function.
int sumDigitFun(int num, int sum)
{
    int dig = 0;

    while (num)
    {
        dig = num % 10;
        sum = sum + dig;
        num = num / 10;
    }

    return sum;
}

// Check Even Or Not - Function.
void checkEvenOrNotFun(int sum)
{
    if (sum % 2 == 0)
    {
        printf("and sum of digit is Even\n\n");
    }
    else
    {
        printf("and sum of digit is Odd\n\n");
    }
}

// Print Result - Function.
void printResultFun(int num, int revNum, int sum)
{
    welcomeMessageFun();
    num = receiveNumberFun(num);
    revNum = reverseNumberFun(num, revNum);
    checkNumbersFun(num, revNum);
    sum = sumDigitFun(num, sum);
    checkEvenOrNotFun(sum);
}
//* End Function ..
