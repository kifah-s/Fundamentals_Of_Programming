

//* Calculate Power 2 Program (Version 1).

/*
 * Calculate the power of a number without using pow.
 */

/*
! Input:
! Please enter a number: 2
! Please enter a exponent: 3

! Output:
! Result: 8
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
float gettingNumberFun(float num);
float gettingExponentFun(float exp);
float calculatePowerFun(float num, float exp, float result);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    float number = 0, exponent = 0, result = 1;

    // Call Function.
    number = gettingNumberFun(number);
    exponent = gettingExponentFun(exponent);
    result = calculatePowerFun(number, exponent, result);

    // Print Result.
    printf("\nResult: %f", result);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Calculate Power 2 Program (Version 1) ..\n\n");
}

// Getting Number - Function.
float gettingNumberFun(float num)
{
    printf("Please enter a number: ");
    scanf("%f", &num);

    return num;
}

// Getting exponent - Function.
float gettingExponentFun(float exp)
{
    printf("Please enter a exponent: ");
    scanf("%f", &exp);

    return exp;
}

// Calculate Power - Function.
float calculatePowerFun(float num, float exp, float result)
{
    // result = pow(num, exp);

    for (int i = 0; i < exp; i++)
    {
        // result = result * num;
        result *= num;
    }

    return result;
}
//* End Function ..
