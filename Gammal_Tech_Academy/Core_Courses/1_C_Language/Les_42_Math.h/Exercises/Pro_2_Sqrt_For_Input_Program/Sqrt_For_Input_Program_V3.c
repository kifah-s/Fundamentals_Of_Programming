

/* >>> Sqrt For Input Program ( Version 3 ) <<< */

/* >>> A program that asks the user to enter a number and print the square root of the number. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>

void welcomeMassageFun();
int getNumberFun();

int main()
{
    welcomeMassageFun();

    int num = getNumberFun();

    printf("\nSqrt is : %.2f\n\n", sqrt(num));

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Sqrt For Input Program ( Version 3 ) ..\n\n");
}

// Get number function;
int getNumberFun()
{
    float num = 0;
    printf("Please enter a number : ");
    scanf("%f", &num);
    return num;
}