

//* Check Sum Global Variables Program (Version 1).

/*
 * Write a program that uses global variables x, y, product, and sum.
 * The program prompts the user to enter two numbers, initializes x and y with the entered values,
 * calculates the sum of x and y, and then checks if the sum is equal to 10,
 * If the sum is equal to 10, the program prints "Yes, equal to 10",
 * otherwise, it prints "Not equal to 10."
 */

/*
! Input:
! Please enter first number: 4
! Please enter second number: 6

! Output:
! Yes, equal to 10.
*/

#include <stdio.h>

//* Global Variables ..
int x, y, sum;
//* End Global Variables ..

void welcomeMessageFun();
int gettingFirstNumberFun(int num1);
int gettingSecondNumberFun(int num2);
int sumTowNumbersFun(int num1, int num2, int sum);
void checkSumNumbersFun(int sum);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Calling Functions.
    x = gettingFirstNumberFun(x);
    y = gettingSecondNumberFun(y);
    sum = sumTowNumbersFun(x, y, sum);
    checkSumNumbersFun(sum);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Check Sum Global Variables Program (Version 1) ..\n\n");
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
int sumTowNumbersFun(int num1, int num2, int sum)
{
    sum = num1 + num2;

    return sum;
}

// Check sum numbers - Function.
void checkSumNumbersFun(int sum)
{
    if (sum == 10)
    {
        printf("\nYes, equal to 10.");
    }
    else
    {
        printf("\nNot, equal to 10.");
    }
}
//* End Function ..
