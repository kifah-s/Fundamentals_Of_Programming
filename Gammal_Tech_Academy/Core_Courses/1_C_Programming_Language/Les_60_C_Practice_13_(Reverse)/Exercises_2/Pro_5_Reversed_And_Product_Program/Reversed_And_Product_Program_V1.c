

//* Reversed And Product Program (Version 1).

/*
 * Create a program to find the product of digits in a reversed number.
 */

/*
! Input:
! Please enter a number: 6584

! Output:
! Reverse Number: 4856
! Product of Reverse Number: 960
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void printReverseAndProductNumberFun(int num, int revNum, int proNum);

int main()
{
    // Declare Variables.
    int number = 0, reverseNumber = 0, productNumber = 1;

    // Call Functions.
    printReverseAndProductNumberFun(number, reverseNumber, productNumber);

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Reversed And Product Program (Version 1) ..\n\n");
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

// Product number - Function.
int productNumberFun(int revNum, int proNum)
{
    int digit = 0;
    while (revNum)
    {
        digit = revNum % 10;
        proNum = proNum * digit;
        revNum = revNum / 10;
    }

    return proNum;
}

// Print Reverse and product Number - Function.
void printReverseAndProductNumberFun(int num, int revNum, int proNum)
{
    welcomeMessageFun();
    num = receiveNumberFun(num);
    revNum = reverseNumberFun(num, revNum);
    proNum = productNumberFun(revNum, proNum);

    printf("\nReverse Number: %d\n", revNum);
    printf("Product of Reverse Number: %d\n\n", proNum);
}
//* End Function ..
