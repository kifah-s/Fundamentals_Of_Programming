

//* Power Program (Version 1).

/*
 * Write a program that calculates the power of a given number.
 */

/*
! Input:
! Please enter a number: 5
! Please enter a power: 2

! Output:
! 5 power 2 = 25
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printResult(int num, int pow, int res);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int number = 0, power = 0, result = 1;

    // Call Functions.
    printResult(number, power, result);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Power Program (Version 1) ..\n\n");
}

// Receive number - Function.
int receiveNumberFun(int num)
{
    printf("Please enter a number: ");
    scanf("%d", &num);

    return num;
}

// Receive Power - Function.
int receivePowerFun(int pow)
{
    printf("Please enter a Power: ");
    scanf("%d", &pow);

    return pow;
}

// Calculate power - Function.
int calculatePowerFun(int num, int pow, int res)
{
    for (int i = 0; i < pow; i++)
    {
        res = res * num;
    }

    return res;
}

// Print result - Function.
void printResult(int num, int pow, int res)
{
    num = receiveNumberFun(num);
    pow = receivePowerFun(pow);
    res = calculatePowerFun(num, pow, res);

    printf("\n%d Power %d: %d", num, pow, res);
}
//* End Function ..
