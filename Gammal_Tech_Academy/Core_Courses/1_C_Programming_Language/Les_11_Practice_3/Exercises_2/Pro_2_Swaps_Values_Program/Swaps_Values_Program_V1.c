

//* Swaps Values Program (Version 1).

/*
 * Write program that swaps the values of two numbers.
 */

/*
! Input:
! Please enter the value of num 1: 7
! Please enter the value of num 2: 9

! Output:
! Before swapping:
! num 1 = 7
! num 2 = 9

! After swapping:
! num 1 = 9
! num 2 = 7


*/

#include <stdio.h>

void welcomeMessageFun();
int gettingNumber1Fun(int num1);
int gettingNumber2Fun(int num2);
void swappingValueFun(int num1, int num2);

int main()
{
    welcomeMessageFun();

    // Declare Variables.
    int number1 = 0, number2 = 0;

    swappingValueFun(number1, number2);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Swaps Values Program (Version 1) ..\n\n");
}

// Getting Number1 - Function.
int gettingNumber1Fun(int num1)
{
    printf("Please enter the value of num 1: ");
    scanf("%i", &num1);

    return num1;
}

// Getting Number2 - Function.
int gettingNumber2Fun(int num2)
{
    printf("Please enter the value of num 2: ");
    scanf("%i", &num2);

    return num2;
}

// Swapping Value - Function.
void swappingValueFun(int num1, int num2)
{
    // Getting Numbers.
    num1 = gettingNumber1Fun(num1);
    num2 = gettingNumber2Fun(num2);

    printf("\nBefore swapping:\nnum 1 = %i\nnum 2 = %i", num1, num2);

    // Swapping Values.
    int swap = 0;
    swap = num1;
    num1 = num2;
    num2 = swap;

    printf("\n\nAfter swapping:\nnum 1 = %i\nnum 2 = %i", num1, num2);
}

//* End Function ..
