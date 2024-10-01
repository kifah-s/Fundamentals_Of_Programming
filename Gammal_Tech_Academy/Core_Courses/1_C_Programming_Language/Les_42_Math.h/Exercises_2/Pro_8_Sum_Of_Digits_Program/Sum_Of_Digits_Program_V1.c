

//* Sum Of Digits Program (Version 1).

/*
 * Calculate the sum of digits in a number.
 */

/*
! Input:
! Please enter a positive number: 123

! Output:
! Sum Of Digits: 6
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int gettingNumberFun(int num);
int calculateSumOfDigitsFun(int num, int sum);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int number = 0, sumOfDigits = 0;

    // Call Function.
    number = gettingNumberFun(number);
    sumOfDigits = calculateSumOfDigitsFun(number, sumOfDigits);

    // Print Result.
    printf("\nSum Of Digits: %d", sumOfDigits);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum Of Digits Program (Version 1) ..\n\n");
}

// Getting Number - Function.
int gettingNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Calculate Sum Of Digits - Function.
int calculateSumOfDigitsFun(int num, int sum)
{
    while (num != 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }
    

    return sum;
}
//* End Function ..
