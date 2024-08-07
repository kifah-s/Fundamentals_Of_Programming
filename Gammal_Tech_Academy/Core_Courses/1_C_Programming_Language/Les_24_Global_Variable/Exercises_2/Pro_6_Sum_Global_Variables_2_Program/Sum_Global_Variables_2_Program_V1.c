

//* Sum Global Variables 2 Program (Version 1).

/*
 * Write a program that uses a global variable sum and a function Sum,
 * to calculate the sum of two numbers x and y,
 * The program should prompt the user to enter two numbers,
 * call the Sum function to calculate the sum, and then print the result.
 */

/*
! Input:
! please enter a first number: 5
! please enter a second number: 7

! Output:
! Sum = 11
*/

#include <stdio.h>

//* Global Variables ..
int x, y, sum;
//* End Global Variables ..

void welcomeMessageFun();
int gettingFirstNumberFun(int num1);
int gettingSecondNumberFun(int num2);
void sumTowNumbersFun(int num1, int num2, int sum);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Calling Functions.
    x = gettingFirstNumberFun(x);
    y = gettingSecondNumberFun(y);
    sumTowNumbersFun(x, y, sum);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum Global Variables 2 Program (Version 1) ..\n\n");
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
void sumTowNumbersFun(int num1, int num2, int sum)
{
    sum = num1 + num2;

    printf("\nSum = %d", sum);
}
//* End Function ..
