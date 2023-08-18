

/* >>> Sum 5 Numbers Program ( Version 3 ) <<< */

/* >>> A program that reads 5 numbers from the user and prints their total (in two different ways). <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int getNumbersFun(int num[5]);
int sumNumbersFun(int num[5]);

int main()
{
    welcomeMassageFun();

    int num[5];
    getNumbersFun(num);
    sumNumbersFun(num);

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Sum 5 Numbers Program ( Version 3 ) ..\n\n");
}

// Get numbers function;
int getNumbersFun(int num[5])
{
    printf("Please enter 5 numbers : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Num %d : ", i + 1);
        scanf("%d", &num[i]);
    }
}

// Sum numbers function;
int sumNumbersFun(int num[5])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + num[i];
    }
    printf("\nSum all numbers = %d", sum);
    printf("\n\n\n");
}