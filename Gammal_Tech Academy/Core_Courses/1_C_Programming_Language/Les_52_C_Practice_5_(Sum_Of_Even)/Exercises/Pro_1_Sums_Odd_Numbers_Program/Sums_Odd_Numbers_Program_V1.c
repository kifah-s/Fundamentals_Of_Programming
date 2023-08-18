

/* >>> Sums Odd Numbers Program ( Version 1 ) <<< */

/* >>> A program that reads 10 numbers from the user and sums odd numbers only. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int getAndSumsOddNumbersFun();

int main()
{
    welcomeMassageFun();

    getAndSumsOddNumbersFun();
    
    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Sums Odd Numbers Program ( Version 1 ) ..\n\n");
}

// Get and sums odd numbers function;
int getAndSumsOddNumbersFun()
{
    int num = 0, sum = 0;
    printf("Please enter 10 numbers : \n", num);
    for (int i = 0; i < 10; i++)
    {
        printf("Num %d : ", i + 1);
        scanf("%d", &num);

        if (num % 2 == 1)
        {
            sum = sum + num;
        }
    }
    printf("\nSum odd numbers = %d", sum);
    printf("\n\n\n");
}