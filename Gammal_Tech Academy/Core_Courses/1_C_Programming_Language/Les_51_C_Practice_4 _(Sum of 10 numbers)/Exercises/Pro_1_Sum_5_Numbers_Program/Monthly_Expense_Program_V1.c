

/* >>> Sum 5 Numbers Program ( Version 1 ) <<< */

/* >>> A program that reads 5 numbers from the user and prints their total (in two different ways). <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int getAndSum5NumbersFun();

int main()
{
    welcomeMassageFun();

    getAndSum5NumbersFun();

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Sum 5 Numbers Program ( Version 1 ) ..\n\n");
}

// Get and sum 5 numbers function;
int getAndSum5NumbersFun()
{
    int num = 0, sum = 0;
    printf("Please enter 5 numbers : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Num %d : ", i + 1);
        scanf("%d", &num);
        sum = sum + num;
    }
    printf("\nSum all numbers = %d", sum);
    printf("\n\n\n");
}