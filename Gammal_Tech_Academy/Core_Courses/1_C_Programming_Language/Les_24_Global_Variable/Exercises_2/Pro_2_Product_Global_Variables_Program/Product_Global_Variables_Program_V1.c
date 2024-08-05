

//* Product Global Variables Program (Version 1).

/*
 * Write a program that uses global variables x, y, and product,
 * The program prompts the user to enter two numbers,
 * initializes x and y with the entered values,
 * calculates the product of x and y, and then prints the result.
 */

/*
! Input:
! Please enter first number: 5
! Please enter second number: 6

! Output:
! Product = 30
*/

#include <stdio.h>

//* Global Variables ..
int x, y, product;
//* End Global Variables ..

void welcomeMessageFun();
int gettingFirstNumberFun(int num1);
int gettingSecondNumberFun(int num2);
void productTowNumbersFun(int num1, int num2, int pro);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Calling Functions.
    x = gettingFirstNumberFun(x);
    y = gettingSecondNumberFun(y);
    productTowNumbersFun(x, y, product);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Product Global Variables Program (Version 1) ..\n\n");
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

// Product tow numbers - Function.
void productTowNumbersFun(int num1, int num2, int pro)
{
    pro = num1 * num2;

    printf("\nProduct = %d", pro);
}
//* End Function ..
