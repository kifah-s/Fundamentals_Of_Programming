

//* Palindrome and Product Program (Version 1).

/*
 * Create a program to find the product of digits of a palindrome number.
 */

/*
! Input:
! Please enter a Number: 161

! Output:
! Reverse: 565
! Palindrome and Product of digits: 6
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void printResultFun(int num, int revNum, int pro);

int main()
{
    // Declare Variables.
    int myNumber = 0, reverseNumber = 0, product = 1;

    // Call Functions.
    printResultFun(myNumber, reverseNumber, product);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Palindrome and Product Program (Version 1) ..\n\n");
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

// Product Digit - Function.
int productDigitFun(int num, int pro)
{
    int dig = 0;

    while (num)
    {
        dig = num % 10;
        pro = pro * dig;
        num = num / 10;
    }

    printf("and product of digit: %d\n\n", pro);
}

// Print Result - Function.
void printResultFun(int num, int revNum, int pro)
{
    welcomeMessageFun();
    num = receiveNumberFun(num);
    revNum = reverseNumberFun(num, revNum);
    checkNumbersFun(num, revNum);
    productDigitFun(num, pro);
}
//* End Function ..
