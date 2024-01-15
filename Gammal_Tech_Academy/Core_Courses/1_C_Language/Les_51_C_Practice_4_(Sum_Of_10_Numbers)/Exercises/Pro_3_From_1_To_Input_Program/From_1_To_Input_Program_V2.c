

/* >>> From 1 To Input Program ( Version 2 ) <<< */

/* >>> A program that asks the person to enter any number and prints to it the numbers from 1 to the extent of the number that he entered, and prints to it the sum of all numbers from 1 to the extent of the number he entered. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int getNumberFun();
int sumNumbersFun(int num);

int main()
{
    welcomeMassageFun();

    int num = getNumberFun();
    sumNumbersFun(num);

    
    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in From 1 To Input Program ( Version 2 ) ..\n\n");
}

// Get number function;
int getNumberFun()
{
    int num = 0;
    printf("Please enter a number : ");
    scanf("%d", &num);

    return num;
}

// sum numbers function;
int sumNumbersFun(int num)
{
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        printf("%d\n", i);
        sum = sum + i;
    }
    printf("\nSum all numbers = %d", sum);
    printf("\n\n\n");
}