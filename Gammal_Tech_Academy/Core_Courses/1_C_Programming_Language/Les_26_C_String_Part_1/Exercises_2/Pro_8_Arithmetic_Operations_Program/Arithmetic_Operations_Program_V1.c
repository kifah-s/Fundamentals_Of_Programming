

//* Arithmetic Operations Program (Version 1).

/*
 * Write a program to perform basic arithmetic operations (addition, subtraction, multiplication, division) on two integers entered by the user.
 * Prompt the user to enter two integers and the desired operation, perform the calculation, and display the result.
 * Ensure proper handling of division by zero.
 */

/*
! Input:
! Please enter first number: 5
! Please enter first number: 6
! Please enter operation (+ , - , * , /): *

! Output:
! Result: 30
!
*/

#include <stdio.h>

void welcomeMessageFun();
int getNumberFun();
char getOperationFun();
int additionFun(int n1, int n2);
int subtractionFun(int n1, int n2);
int multiplicationFun(int n1, int n2);
int divisionFun(int n1, int n2);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare variables.
    int firstNumber = 0, secondNumber = 0, result = 0;
    char operation;

    // Calling Functions.
    firstNumber = getNumberFun();
    secondNumber = getNumberFun();
    operation = getOperationFun();

    switch (operation)
    {
    case '+':
        result = additionFun(firstNumber, secondNumber);
        printf("Result: %d", result);
        break;

    case '-':
        result = subtractionFun(firstNumber, secondNumber);
        printf("Result: %d", result);
        break;

    case '*':
        result = multiplicationFun(firstNumber, secondNumber);
        printf("Result: %d", result);
        break;

    case '/':
        if (secondNumber == 0)
        {
            printf("You cannot divide by zero.");
        }
        else
        {
            result = divisionFun(firstNumber, secondNumber);
            printf("Result: %d", result);
        }
        break;

    default:
        break;
    }

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Arithmetic Operations Program (Version 1) ..\n\n");
}

// Get Number - Function.
int getNumberFun()
{
    int num;

    printf("Please enter number: ");
    scanf("%d", &num);

    return num;
}

// Get Operation - Function.
char getOperationFun()
{
    char ope;

    printf("Please enter operation (+ , - , * , /): ");
    scanf(" %c", &ope);

    return ope;
}

// Addition - Function.
int additionFun(int n1, int n2)
{
    int result = n1 + n2;

    return result;
}

// Subtraction - Function.
int subtractionFun(int n1, int n2)
{
    int result = n1 - n2;

    return result;
}

// Multiplication - Function.
int multiplicationFun(int n1, int n2)
{
    int result = n1 * n2;

    return result;
}

// Division - Function.
int divisionFun(int n1, int n2)
{
    int result = n1 / n2;

    return result;
}
//* End Function ..
