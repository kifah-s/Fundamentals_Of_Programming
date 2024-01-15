

/* >>> From First To Second Program ( Version 1 ) <<< */

/* >>> A program that asks the person to enter two numbers if the first is smaller than the second. print the numbers from the first number to the second number. If the opposite, print the numbers from the second to the first term. and print the sum in the two situations. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int getFirstNumberFun(int firstNumber);
int getSecondNumberFun(int secondNumber);
void fromFirstToSecondFun(int firstNumber, int secondNumber);

int main()
{
    welcomeMassageFun();

    int firstNumber = 0, secondNumber = 0;
    firstNumber = getFirstNumberFun(firstNumber);
    secondNumber = getSecondNumberFun(secondNumber);

    fromFirstToSecondFun(firstNumber, secondNumber);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in From First To Second Program ( Version 1 ) ..\n\n");
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

// From First To Second / Function.
void fromFirstToSecondFun(int firstNumber, int secondNumber)
{
    int sum = 0;
    if (firstNumber < secondNumber)
    {
        for (int i = firstNumber; i <= secondNumber; i++)
        {
            printf("\n%d", i);
            sum += i;
        }
        printf("\n\n");
    }
    else if (firstNumber > secondNumber)
    {
        for (int i = firstNumber; i >= secondNumber; i--)
        {
            printf("\n%d", i);
            sum += i;
        }
        printf("\n\n");
    }

    printf("Sum numbers from %d to %d = %d\n\n", firstNumber, secondNumber, sum);
}
