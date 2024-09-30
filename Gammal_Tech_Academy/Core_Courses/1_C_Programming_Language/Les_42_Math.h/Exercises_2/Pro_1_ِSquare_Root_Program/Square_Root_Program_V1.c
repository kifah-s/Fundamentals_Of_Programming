

//* Square Root Program (Version 1).

/*
 * Calculate the square root of a number.
 */

/*
! Input:
! Please enter a number: 16

! Output:
! Square Root: 4
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
float gettingNumberFun(float num);
float calculateSquareRootFun(float num, float result);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    float number = 0, squareRoot = 0;

    // Call Function.
    number = gettingNumberFun(number);
    squareRoot = calculateSquareRootFun(number, squareRoot);

    // Print Result.
    printf("Square Root: %f", squareRoot);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Square Root Program (Version 1) ..\n\n");
}

// Getting Number - Function.
float gettingNumberFun(float num)
{
    printf("Please enter a number: ");
    scanf("%f", &num);

    return num;
}

// Calculate square root - Function.
float calculateSquareRootFun(float num, float result)
{
    result = sqrt(num);

    return result;
}
//* End Function ..
