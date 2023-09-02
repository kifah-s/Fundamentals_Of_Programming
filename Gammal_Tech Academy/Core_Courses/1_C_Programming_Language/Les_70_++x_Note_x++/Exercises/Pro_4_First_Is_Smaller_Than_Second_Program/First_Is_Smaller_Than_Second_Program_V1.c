

/* >>> First Is Smaller Than Second Program ( Version 1 ) <<< */

/* >>> A program that asks a person to enter two numbers, the first is smaller than the second, and it prints the numbers from the first number to the second number, and their sum prints it. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int getFirstNumberFun(int firstNumber);
int getSecondNumberFun(int secondNumber);
void fromSmallerToLargestFun(int firstNumber, int secondNumber);

int main()
{
    welcomeMassageFun();

    int firstNumber = 0, secondNumber = 0;
    firstNumber = getFirstNumberFun(firstNumber);
    secondNumber = getSecondNumberFun(secondNumber);

    fromSmallerToLargestFun(firstNumber, secondNumber);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in First Is Smaller Than Second Program ( Version 1 ) ..\n\n");
}

// Get first Number / Function.
int getFirstNumberFun(int firstNumber)
{
    printf("Please enter first number / smaller: ");
    scanf("%d", &firstNumber);

    return firstNumber;
}

// Get second Number / Function.
int getSecondNumberFun(int secondNumber)
{
    printf("Please enter second number / largest: ");
    scanf("%d", &secondNumber);

    return secondNumber;
}

// From smaller to largest / Function.
void fromSmallerToLargestFun(int firstNumber, int secondNumber)
{
    int sum = 0;
    for (int i = firstNumber; i <= secondNumber; i++)
    {
        printf("\n%d", i);
        sum += i;
    }
    printf("\n\n");

    printf("Sum numbers from %d to %d = %d\n\n", firstNumber, secondNumber, sum);
}
