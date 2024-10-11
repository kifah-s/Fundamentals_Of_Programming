

//* Typedef For Sum Numbers Program (Version 1).

/*
 * Write a program that calculates the sum of two numbers using typedef.
 * Prompt the user to enter two numbers, add them together, and then display the result.
 */

/*
! Input:
! Please enter a first number: 5
! Please enter a second number: 6

! Output:
! Sum: 11
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

// Declare Typedef.
typedef int myInteger;

void welcomeMessageFun();
myInteger gettingFirstNumberFun(int num1);
myInteger gettingSecondNumberFun(int num2);
myInteger calculateNumbersFun(myInteger num1, myInteger num2, myInteger sum);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variable.
    myInteger firstNum = 0, secondNum = 0, sum = 0;

    firstNum = gettingFirstNumberFun(firstNum);
    secondNum = gettingSecondNumberFun(secondNum);
    sum = calculateNumbersFun(firstNum, secondNum, sum);

    printf("Sum: %d", sum);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Typedef For Sum Numbers Program (Version 1) ..\n\n");
}

// Getting First Number - Function.
myInteger gettingFirstNumberFun(myInteger num1)
{
    printf("Please enter a First number: ");
    scanf("\n%d", &num1);

    return num1;
}

// Getting Second Number - Function.
myInteger gettingSecondNumberFun(myInteger num2)
{
    printf("Please enter a Second number: ");
    scanf("%d", &num2);

    return num2;
}

// Calculate Numbers - Function.
myInteger calculateNumbersFun(myInteger num1, myInteger num2, myInteger sum)
{
    sum = num1 + num2;

    return sum;
}
//* End Function ..
