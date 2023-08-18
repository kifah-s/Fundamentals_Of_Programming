

/* >>> Sums Positive Numbers Program ( Version 1 ) <<< */

/* >>> A program that reads 10 numbers from the user and sums only positive numbers. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int getAndSumsPositiveNumbersFun();

int main()
{
    welcomeMassageFun();

    getAndSumsPositiveNumbersFun();
    
    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Sums Positive Numbers Program ( Version 1 ) ..\n\n");
}

// Get and sums Positive numbers function;
int getAndSumsPositiveNumbersFun()
{
    int num = 0, sum = 0;
    printf("Please enter 10 numbers : \n", num);
    for (int i = 0; i < 10; i++)
    {
        printf("Num %d : ", i + 1);
        scanf("%d", &num);

        if (num > 0)
        {
            sum = sum + num;
        }
    }
    printf("\nSum Positive numbers = %d", sum);
    printf("\n\n\n");
}