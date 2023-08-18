

/* >>> Get Number Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter an n number and prints the sum of each number multiplied by itself from 1 to n. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int getNumberFun();
int multiplicationNumberFun(int num);

int main()
{
    welcomeMassageFun();

    int num = getNumberFun();
    multiplicationNumberFun(num);

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Get Number Program ( Version 1 ) ..\n\n");
}

// Get number function;
int getNumberFun()
{
    int num = 0;
    printf("Please enter a number : ");
    scanf("%d", &num);

    return num;
}

// Multiplication number function;
int multiplicationNumberFun(int num)
{
    for (int i = 1; i <= num; i++)
    {
        printf("(%d * %d = %d)\n", i, i, i * i);
    }
    printf("\n\n");
}