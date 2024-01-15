

/* >>> Sums Numbers Divisible By 5 Program ( Version 1 ) <<< */

/* >>> A program that reads 10 numbers from the user and sums only Numbers Divisible By 5. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int getAndSumsNumbersDivisibleBy5Fun();

int main()
{
    welcomeMassageFun();

    getAndSumsNumbersDivisibleBy5Fun();
    
    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Sums Numbers Divisible By 5 Program ( Version 1 ) ..\n\n");
}

// Get and sums Numbers Divisible By 5 function;
int getAndSumsNumbersDivisibleBy5Fun()
{
    int num = 0, sum = 0;
    printf("Please enter 10 numbers : \n", num);
    for (int i = 0; i < 10; i++)
    {
        printf("Num %d : ", i + 1);
        scanf("%d", &num);

        if (num % 5 == 0)
        {
            sum = sum + num;
        }
    }
    printf("\nSums Numbers Divisible By 5 = %d", sum);
    printf("\n\n\n");
}