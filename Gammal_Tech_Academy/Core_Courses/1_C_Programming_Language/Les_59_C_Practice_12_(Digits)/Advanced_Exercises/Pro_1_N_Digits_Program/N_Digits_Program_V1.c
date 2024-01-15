

/* >>> N Digits Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter an n number and prints the sum of numbers whose number of digits is from one digit to n digits, all of which are 1.
   Example: 5
   1 + 11 + 111 + 1111 + 11111 = 12345 <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int getNumberFun();
void nDigitsFun(int number);

int main()
{
    welcomeMassageFun();

    int number = getNumberFun(number);
    // printf("\n%d\n\n", number);

    nDigitsFun(number);

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in N Digits Program ( Version 1 ) ..\n\n");
}

// Get number / function;
int getNumberFun(int number)
{
    number = 0;
    printf("Please enter a number: ");
    scanf("%d", &number);

    return number;
}

// Print N Digits / function;
void nDigitsFun(int number)
{
    int sum = 0, count = 0;
    for (int i = number; i > 0; i--)
    {
        printf("\n%d = ", i);
    }

    printf("\n\n");
}