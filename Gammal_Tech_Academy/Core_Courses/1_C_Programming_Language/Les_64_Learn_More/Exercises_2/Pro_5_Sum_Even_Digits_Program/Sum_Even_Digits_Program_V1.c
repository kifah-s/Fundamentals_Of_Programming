

//* Sum Even Digits Program (Version 1).

/*
 * Write a program that takes an integer as input and calculates the sum of its even digits.
/*
! Input:
! Please enter a number: 1598

! Output:
! Sum of even digits: 4
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int num, int sum);

int main()
{
    // Declare Variables.
    int myNumber = 0, sumEvenDigits = 0;

    // Call Functions.
    resultFun(myNumber, sumEvenDigits);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum Even Digits Program (Version 1) ..\n\n");
}

// Receive Number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a Number: ");
    scanf("%d", &num);

    return num;
}

// Sum Even Digits - Function.
int sumEvenDigitsFun(int num, int sum)
{
    int digit = 0;

    while (num != 0)
    {
        digit = num % 10;

        if (digit % 2 == 0)
        {
            sum = sum + digit;
        }

        num = num / 10;
    }

    return sum;
}

// Result - Function.
void resultFun(int num, int sum)
{
    welcomeMessageFun();
    num = receiveNumberFun(num);
    sum = sumEvenDigitsFun(num, sum);

    printf("\nSum of even digits: %d\n\n", sum);
}
//* End Function ..
