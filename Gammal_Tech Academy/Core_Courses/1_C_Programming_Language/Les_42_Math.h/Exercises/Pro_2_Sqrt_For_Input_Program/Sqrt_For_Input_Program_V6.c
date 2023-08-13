

/* >>> Sqrt For Input Program ( Version 6 ) <<< */

/* >>> A program that asks the user to enter a number and print the square root of the number. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>

void welcomeMassageFun();
int getNumberFun();
void sqrtNumberFun(float num);

int main()
{
    welcomeMassageFun();

    sqrtNumberFun(getNumberFun());

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Sqrt For Input Program ( Version 6 ) ..\n\n");
}

// Get number function;
int getNumberFun()
{
    float num = 0;
    printf("Please enter a number : ");
    scanf("%f", &num);
    return num;
}

// Sqrt number function;
void sqrtNumberFun(float num)
{
    printf("\nSqrt is : %.2f\n\n", sqrt(num));
}