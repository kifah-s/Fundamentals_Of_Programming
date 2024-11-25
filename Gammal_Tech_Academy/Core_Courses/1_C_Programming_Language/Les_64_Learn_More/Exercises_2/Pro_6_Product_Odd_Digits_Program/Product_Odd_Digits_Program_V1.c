

//* Product Odd Digits Program (Version 1).

/*
 * Write a program that takes an integer as input and calculates the product of its odd digits.
/*
! Input:
! Please enter a number: 159

! Output:
! Product of odd digits: 45
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int num, int pro);

int main()
{
    // Declare Variables.
    int myNumber = 0, productOddDigits = 1;

    // Call Functions.
    resultFun(myNumber, productOddDigits);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Product Odd Digits Program (Version 1) ..\n\n");
}

// Receive Number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a Number: ");
    scanf("%d", &num);

    return num;
}

// Product Odd Digits - Function.
int productOddDigitsFun(int num, int pro)
{
    int digit = 0;

    while (num != 0)
    {
        digit = num % 10;

        if (digit % 2 != 0)
        {
            pro = pro * digit;
        }

        num = num / 10;
    }

    return pro;
}

// Result - Function.
void resultFun(int num, int pro)
{
    welcomeMessageFun();
    num = receiveNumberFun(num);
    pro = productOddDigitsFun(num, pro);

    printf("\nProduct of odd digits: %d\n\n", pro);
}
//* End Function ..
