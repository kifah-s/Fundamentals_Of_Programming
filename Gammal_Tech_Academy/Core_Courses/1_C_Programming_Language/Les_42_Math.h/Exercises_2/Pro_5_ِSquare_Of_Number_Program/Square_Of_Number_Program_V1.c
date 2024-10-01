

//* Square Of Number Program (Version 1).

/*
 * Calculate the square of a number without using pow.
 */

/*
! Input:
! Please enter a number: 2

! Output:
! Square Of Number: 4.000000
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
float gettingNumberFun(float num);
float calculateSquareOfNumberFun(float num, float squOfNum);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    float number = 0, squareOfNumber = 0;

    // Call Function.
    number = gettingNumberFun(number);
    squareOfNumber = calculateSquareOfNumberFun(number, squareOfNumber);
    // Print Result.
    printf("\nSquare Of Number: %f", squareOfNumber);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Square Of Number Program (Version 1) ..\n\n");
}

// Getting Number - Function.
float gettingNumberFun(float num)
{
    printf("Please enter a number: ");
    scanf("%f", &num);

    return num;
}

// Calculate Square Of Number - Function.
float calculateSquareOfNumberFun(float num, float squOfNum)
{
    // squOfNum = num * num;
    squOfNum = num * num;

    return squOfNum;
}
//* End Function ..
