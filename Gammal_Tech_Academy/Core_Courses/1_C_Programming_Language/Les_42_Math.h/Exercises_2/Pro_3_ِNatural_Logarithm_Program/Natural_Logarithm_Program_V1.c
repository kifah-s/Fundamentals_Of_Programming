

//* Natural Logarithm Program (Version 1).

/*
 * Calculate the natural logarithm of a number.
 */

/*
! Input:
! Please enter a number: 32

! Output:
! Natural Logarithm: 3.465736
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
float gettingNumberFun(float num);
float calculateNaturalLogarithmFun(float num, float natLog);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    float number = 0, naturalLogarithm = 0;

    // Call Function.
    number = gettingNumberFun(number);
    naturalLogarithm = calculateNaturalLogarithmFun(number, naturalLogarithm);
    // Print Result.
    printf("\nNatural Logarithm: %f", naturalLogarithm);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Natural Logarithm Program (Version 1) ..\n\n");
}

// Getting Number - Function.
float gettingNumberFun(float num)
{
    printf("Please enter a number: ");
    scanf("%f", &num);

    return num;
}

// Calculate Natural Logarithm - Function.
float calculateNaturalLogarithmFun(float num, float natLog)
{
    natLog = log(num);

    return natLog;
}
//* End Function ..
