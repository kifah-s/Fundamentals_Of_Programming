

//* Palindrome or Not Program (Version 1).

/*
 * Write a program that takes an integer as input and checks if it is a palindrome or not.
/*
! Input:
! Please enter a number: 171

! Output:
! Palindrome
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int num, int rev);

int main()
{
    // Declare Variables.
    int myNumber = 0, reverseNumber = 0;

    // Call Functions.
    resultFun(myNumber, reverseNumber);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Palindrome or Not Program (Version 1) ..\n\n");
}

// Receive Number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a Number: ");
    scanf("%d", &num);

    return num;
}

// Reverse Number - Function.
int reverseNumberFun(int num, int rev)
{
    int digit = 0;

    while (num != 0)
    {
        digit = num % 10;

        rev = (rev * 10) + digit;

        num = num / 10;
    }

    return rev;
}

// Check Numbers - Function.
void checkNumbersFun(int num, int rev)
{
    if (num == rev)
    {
        printf("\nPalindrome\n\n");
    }
    else
    {
        printf("\nNot Palindrome\n\n");
    }
}

// Result - Function.
void resultFun(int num, int rev)
{
    welcomeMessageFun();
    num = receiveNumberFun(num);
    rev = reverseNumberFun(num, rev);
    checkNumbersFun(num, rev);
}
//* End Function ..
