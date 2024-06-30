

/* >>> Negative And Positive Program ( Version 1 ) <<< */

/* >>> A program that asks a person to enter two numbers that express the size of the 2D array, after that he enters random numbers in which he dictates the array and prints the smallest number in these numbers. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int negativeAndPositiveFun();

int main()
{
    welcomeMassageFun();

    negativeAndPositiveFun();

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Negative And Positive Program ( Version 1 ) ..\n\n");
}

// Negative And Positive function;
int negativeAndPositiveFun()
{
    int num = 0, negativeNumber = 0, positiveNumber = 0;
    do
    {
        printf("Please enter a number : ");
        scanf("%d", &num);

        if (num > 0)
        {
            positiveNumber++;
        }
        else if(num < 0)
        {
            negativeNumber++;
        }
    } while (num != 0);

    printf("\nThe number of positive numbers : %d\n", positiveNumber);
    printf("\nThe number of negative numbers : %d\n\n\n", negativeNumber);
}