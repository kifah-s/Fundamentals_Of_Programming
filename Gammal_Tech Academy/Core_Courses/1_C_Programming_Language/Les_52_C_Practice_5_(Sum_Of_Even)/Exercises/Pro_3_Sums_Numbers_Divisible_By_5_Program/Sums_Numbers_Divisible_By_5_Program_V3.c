

/* >>> Sums Numbers Divisible By 5 Program ( Version 3 ) <<< */

/* >>> A program that reads 10 numbers from the user and sums Numbers Divisible By 5 only. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void welcomeMassageFun();
int numberOfNumbersFun();
int getAndSumsNumbersDivisibleBy5Fun(int num);

int main()
{
    welcomeMassageFun();

    int num = numberOfNumbersFun();
    getAndSumsNumbersDivisibleBy5Fun(num);

    return 0;
}

// Function ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Sums Numbers Divisible By 5 Program ( Version 3 ) ..\n\n");
}

// Get number of numbers function;
int numberOfNumbersFun()
{
    int num = 0;
    printf("How many numbers you want enter ? ");
    scanf("%d", &num);

    return num;
}

// Get and sums Numbers Divisible By 5 function;
int getAndSumsNumbersDivisibleBy5Fun(int num_1)
{
    int num_2 = 0, sum = 0;
    printf("Please enter %d numbers : \n", num_1);
    for (int i = 0; i < num_1; i++)
    {
        printf("Num %d : ", i + 1);
        scanf("%d", &num_2);

        if (num_2 % 5 == 0)
        {
            sum = sum + num_2;
        }
    }
    printf("\nSum Numbers Divisible By 5 = %d", sum);
    printf("\n\n\n");
}