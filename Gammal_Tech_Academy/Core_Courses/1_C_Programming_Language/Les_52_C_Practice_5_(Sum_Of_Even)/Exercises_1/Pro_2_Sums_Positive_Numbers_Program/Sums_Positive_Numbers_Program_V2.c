

/* >>> Sums Positive Numbers Program ( Version 2 ) <<< */

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
    printf("\n\nYou welcome in Sums Positive Numbers Program ( Version 2 ) ..\n\n");
}

// Get and sums Positive numbers function;
int getAndSumsPositiveNumbersFun()
{
    int num_1 = 0, num_2 = 0, sum = 0;
    printf("How many numbers you want enter ? ");
    scanf("%d", &num_1);

    printf("Please enter %d numbers : \n", num_1);
    for (int i = 0; i < num_1; i++)
    {
        printf("Num %d : ", i + 1);
        scanf("%d", &num_2);

        if (num_2 > 0)
        {
            sum = sum + num_2;
        }
    }
    printf("\nSum Positive numbers = %d", sum);
    printf("\n\n\n");
}