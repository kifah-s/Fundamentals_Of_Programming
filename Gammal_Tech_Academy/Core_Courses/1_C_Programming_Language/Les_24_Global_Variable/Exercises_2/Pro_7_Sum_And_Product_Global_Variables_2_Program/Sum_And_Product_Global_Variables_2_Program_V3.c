

//* Sum And Product Global Variables 2 Program (Version 3).

/*
 * Write a program that uses global variables x, y, sum, product, and functions Sum and Product,
 * to calculate and print the sum and product of two numbers x and y,
 * The program should prompt the user to enter two numbers,
 * call the Sum and Product functions to calculate the sum and product,
 * and then print the results.
 */

/*
! Input:
! Please enter first number: 6
! Please enter second number: 5

! Output:
! Sum = 11
! Product = 30
*/

#include <stdio.h>

//* Global Variables ..
int x, y, product, sum;
//* End Global Variables ..

void welcomeMessageFun();
int gettingFirstNumberFun(int num1);
int gettingSecondNumberFun(int num2);
void sumTowNumbersFun();
void productTowNumbersFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Calling Functions.
    x = gettingFirstNumberFun(x);
    y = gettingSecondNumberFun(y);

    sumTowNumbersFun();
    productTowNumbersFun();

    printf("\nSum = %d", sum);
    printf("\nProduct = %d", product);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum And Product Global Variables 2 Program (Version 3) ..\n\n");
}

// Getting first number - Function.
int gettingFirstNumberFun(int num1)
{
    printf("Please enter first number: ");
    scanf("%d", &num1);

    return num1;
}

// Getting second number - Function.
int gettingSecondNumberFun(int num2)
{
    printf("Please enter second number: ");
    scanf("%d", &num2);

    return num2;
}

// Sum tow numbers - Function.
void sumTowNumbersFun()
{
    sum = x + y;
}

// Product tow numbers - Function.
void productTowNumbersFun()
{
    product = x * y;
}

//* End Function ..
