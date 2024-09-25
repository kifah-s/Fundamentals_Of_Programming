

//* Floating Point and Constant Program (Version 1).

/*
 * Write a program that calculates the product of two
 * constant floating-point numbers. Declare two constant
 * float variables and initialize them with user-input values.
 * Calculate and print their product.
 */

/*
! Input:
! Please enter first floating point number: 5
! Please enter second floating point number: 6

! Output:
! Product: 30.000000
*/

#include <stdio.h>
#include <string.h>

void welcomeMessageFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Constant.
    const float firstFPNumber, secondFPNumber;

    printf("Please enter first floating point number: ");
    scanf("%f", &firstFPNumber);
    
    printf("Please enter second floating point number: ");
    scanf("%f", &secondFPNumber);

    const float product = firstFPNumber * secondFPNumber;

    printf("Product: %f", product);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Enter Constant Program (Version 1) ..\n\n");
}
//* End Function ..
