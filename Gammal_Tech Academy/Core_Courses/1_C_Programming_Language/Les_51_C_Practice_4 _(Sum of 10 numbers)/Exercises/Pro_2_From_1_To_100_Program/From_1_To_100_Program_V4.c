

/* >>> From 1 To 100 Program ( Version 4 ) <<< */

/* >>> A program that prints the numbers from 1 : 100 and add them all and prints the total. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int fillArrayFun(int num[100]);
int sum100NumbersFun(int num[100]);

int main()
{
    welcomeMassageFun();
    
    int num[100];
    fillArrayFun(num);
    sum100NumbersFun(num);

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in From 1 To 100 Program ( Version 4 ) ..\n\n");
}

// Fill array function;
int fillArrayFun(int num[100])
{
    for (int i = 1; i <= 100; i++)
    {
        printf("%d\n", i);
        num[i] = i;
    }
}

// sum 100 numbers function;
int sum100NumbersFun(int num[100])
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum = sum + num[i];
    }
    printf("\nSum all numbers = %d", sum);
    printf("\n\n\n");
}
