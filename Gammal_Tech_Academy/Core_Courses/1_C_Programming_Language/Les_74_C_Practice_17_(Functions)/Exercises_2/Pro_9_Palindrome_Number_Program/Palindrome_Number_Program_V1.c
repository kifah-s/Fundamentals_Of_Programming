

//* Swap Numbers Program (Version 1).

/*
* Create a program with a function checkPalindromeNumber that takes an integer as input and returns 1 if it's a palindrome and 0 if it's not.
* In the main function, take an integer input, call the checkPalindromeNumber function, and print whether the number is a palindrome or not.

! Input:
! Please enter a number:

! Output:
! The number is a palindrome.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int num, int revNum);

int main()
{
    // Declare Variables.
    int number = 0, reverseNumber = 0;

    // Call Functions.
    resultFun(number, reverseNumber);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Swap Numbers Program (Version 1) ..\n\n");
}

// Get Number - Function.
int getNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Reverse Number - Function.
int reverseNumberFun(int num, int revNum)
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
        printf("The number is a palindrome.");
    }
    else
    {
        printf("The number is Not a palindrome.");
    }
}

// Result - Function.
void resultFun(int num, int revNum)
{
    printWelcomeMessageFun();
    num = getNumberFun(num);
    revNum = reverseNumberFun(num, revNum);
    checkNumbersFun(num, revNum);

    printf("\n\n");
}
//* End Function ..
