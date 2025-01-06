

//* Palindrome or Not Program (Version 1).

/*
* Write a program to check if a given number is a palindrome or not.

! Input:
! Please enter a number: 1221

! Output:
! 1221 is a Palindrome.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int num, int revNum);

int main()
{
    // Declare Variables.
    int number = 0, reversNumber = 0;

    // Call Functions.
    resultFun(number, reversNumber);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Palindrome or Not Program (Version 1) ..\n\n");
}

// Git Number - Function.
int gitNumberFun(int num)
{
    printf("Please enter a Numbers: ");
    scanf("%d", &num);

    return num;
}

// Revers Number - Function.
int reversNumberFun(int num, int revNum)
{
    int digit = 0;
    while (num != 0)
    {
        digit = num % 10;
        revNum = (revNum * 10) + digit;
        num = num / 10;
    }

    return revNum;
}

// Check Numbers - Function.
void checkNumbersFun(int num, int revNum)
{
    if (num == revNum)
    {
        printf("\n%d is Palindrome.\n\n", num);
    }
    else
    {
        printf("\n%d is Not Palindrome.\n\n", num);
    }
}

// Result - Function.
void resultFun(int num, int revNum)
{
    printWelcomeMessageFun();
    num = gitNumberFun(num);
    revNum = reversNumberFun(num, revNum);
    checkNumbersFun(num, revNum);
}
//* End Function ..
