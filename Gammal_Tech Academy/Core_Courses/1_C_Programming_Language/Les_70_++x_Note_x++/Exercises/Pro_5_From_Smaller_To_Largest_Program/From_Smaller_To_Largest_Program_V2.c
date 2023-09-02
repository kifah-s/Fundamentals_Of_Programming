

/* >>> From Smaller To Largest Program ( Version 2 ) <<< */

/* >>> A program that asks the person to enter two numbers if the first is smaller than the second. print the numbers from the first number to the second number. If the opposite, print the numbers from the first to the second term. and print the sum in the two situations. <<< */

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
    printf("\n\nYou welcome in From Smaller To Largest Program ( Version 2 ) ..\n\n");
}

// Get first Number / Function.
int getFirstNumberFun(int firstNumber)
{
    printf("Please enter first number: ");
    scanf("%d", &firstNumber);

    return firstNumber;
}

// Get second Number / Function.
int getSecondNumberFun(int secondNumber)
{
    printf("Please enter second number: ");
    scanf("%d", &secondNumber);

    return secondNumber;
}

// From smaller to largest / Function.
void fromSmallerToLargestFun(int firstNumber, int secondNumber)
{
    int sum = 0;
    if (firstNumber < secondNumber)
    {
        for (int i = firstNumber; i <= secondNumber; ++i)
        {
            printf("\n%d", i);
            sum += i;
        }
        printf("\n\n");
    }
    else if (secondNumber < firstNumber)
    {
        for (int i = secondNumber; i <= firstNumber; i++)
        {
            printf("\n%d", i);
            sum += i;
        }
        printf("\n\n");
    }

    printf("Sum numbers from %d to %d = %d\n\n", secondNumber, firstNumber, sum);
}
