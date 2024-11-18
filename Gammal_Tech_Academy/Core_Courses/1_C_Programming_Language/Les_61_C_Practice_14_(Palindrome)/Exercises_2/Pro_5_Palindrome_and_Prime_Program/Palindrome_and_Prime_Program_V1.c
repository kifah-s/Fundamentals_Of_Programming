

//* Palindrome and Prime Program (Version 1).

/*
 * Create a program to check if a given number is a palindrome and a prime number.
 */

/*
! Input:
! Please enter a Number: 131

! Output:
! Palindrome and a Prime Number.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void printResultFun(int num, int revNum);

int main()
{
    // Declare Variables.
    int myNumber = 0, reverseNumber = 0;

    // Call Functions.
    printResultFun(myNumber, reverseNumber);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Palindrome and Prime Program (Version 1) ..\n\n");
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

    return revNum;
}

// Check Palindrome - Function.
void checkPalindromeFun(int num, int revNum)
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

// Check Prime - Function.
void checkPrimeFun(int num)
{
    bool pri = true;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            pri = false;
        }
    }

    if (pri == true)
    {
        printf("and a Prime Number.\n\n");
    }
    else
    {
        printf("and a Not Prime Number.\n\n");
    }
}

// Print Result - Function.
void printResultFun(int num, int revNum)
{
    welcomeMessageFun();
    num = receiveNumberFun(num);
    revNum = reverseNumberFun(num, revNum);
    checkPalindromeFun(num, revNum);
    checkPrimeFun(num);
}
//* End Function ..
