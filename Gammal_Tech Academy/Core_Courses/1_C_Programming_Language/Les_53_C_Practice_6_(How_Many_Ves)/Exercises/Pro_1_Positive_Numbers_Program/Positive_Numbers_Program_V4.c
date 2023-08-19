

/* >>> Positive Numbers Program ( Version 4 ) <<< */

/* >>> A program that reads 10 numbers and prints the positive numbers that you have typed and prints their total. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int positiveNumberFun(int number);

int main()
{
    welcomeMassageFun();

    int number = 0;

    // Positive number function;
    positiveNumberFun(number);

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Positive Numbers Program ( Version 4 ) ..\n\n");
}

// Positive number function;
int positiveNumberFun(int number)
{
    int posNumCounter = 0, posNumSum = 0;
    for (int i = 10; i > 0; i--)
    {
        printf("\nPlease enter %d number : ", i);
        scanf("%d", &number);

        if (number > 0)
        {
            printf("Positive number : %d\n", number);
            posNumCounter++;
            posNumSum = posNumSum + number;
        }
    }
    printf("\n\nNumber of positive number is : %d\n", posNumCounter);
    printf("Sum of positive number is : %d\n\n", posNumSum);
}