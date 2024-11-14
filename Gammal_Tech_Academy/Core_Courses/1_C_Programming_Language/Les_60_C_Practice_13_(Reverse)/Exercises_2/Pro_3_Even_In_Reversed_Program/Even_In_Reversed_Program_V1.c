

//* Even In Reversed Program (Version 1).

/*
 * Create a program to count the number of even digits in a reversed number.
 */

/*
! Input:
! Please enter a number: 3578

! Output:
! Reverse Number: 8753
! Number of even digit in Reversed Number: 1
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void printReverseAndEvenNumberFun(int num, int revNum, int couEven);

int main()
{
    // Declare Variables.
    int number = 0, reverseNumber = 0, counterEven = 0;

    // Call Functions.
    printReverseAndEvenNumberFun(number, reverseNumber, counterEven);

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Even In Reversed Program (Version 1) ..\n\n");
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

// Count even number - Function.
int countEvenNumberFun(int revNum, int couEven)
{
    int digit = 0;
    while (revNum)
    {
        digit = revNum % 10;

        if (digit % 2 == 0)
        {
            couEven++;
        }

        revNum = revNum / 10;
    }

    return couEven;
}

// Print Reverse and even Number - Function.
void printReverseAndEvenNumberFun(int num, int revNum, int couEven)
{
    welcomeMessageFun();
    num = receiveNumberFun(num);
    revNum = reverseNumberFun(num, revNum);
    couEven = countEvenNumberFun(revNum, couEven);

    printf("\nReverse Number: %d\n", revNum);
    printf("Number of even digit in Reversed Number: %d\n\n", couEven);
}
//* End Function ..
