

/* >>> Even Numbers Program ( Version 4 ) <<< */

/* >>> A program that reads 10 numbers and prints the Even numbers that you have typed and prints their total. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int evenNumberFun(int number);

int main()
{
    welcomeMassageFun();

    int number = 0;

    // Even number function;
    evenNumberFun(number);

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Even Numbers Program ( Version 4 ) ..\n\n");
}

// Even number function;
int evenNumberFun(int number)
{
    int eveNumCounter = 0, eveNumSums = 0;
    printf("Please enter 10 numbers .. \n");
    for (int i = 0; i < 10; i++)
    {
        printf("\nPlease enter number %d: ", i + 1);
        scanf("%d", &number);

        if (number % 2 == 0)
        {
            printf("Even number : %d\n", number);
            eveNumCounter++;
            eveNumSums = eveNumSums + number;
        }
    }
    printf("\n\nThe numbers of Even number of array = %d\n", eveNumCounter);
    printf("The sums Even numbers of array = %d\n\n\n", eveNumSums);
}