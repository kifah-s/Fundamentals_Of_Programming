

/* >>> Sqrt For Numbers Program ( Version 3 ) <<< */

/* >>> A program that prints the square root of (4, 9, 16, 25, 36, 144). <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>

void welcomeMassageFun();
void printSqrtNumberFun(float num);

int main()
{
    welcomeMassageFun();

    printSqrtNumberFun(4);
    printSqrtNumberFun(9);
    printSqrtNumberFun(16);
    printSqrtNumberFun(25);
    printSqrtNumberFun(36);
    printSqrtNumberFun(144);

    return 0;
}

// Functions ..
//  Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Sqrt For Numbers Program ( Version 3 ) ..\n\n");
}

// Print sqrt number function;
void printSqrtNumberFun(float num)
{
    printf("Sqrt %0.f = %.2f\n\n", num, sqrt(num));
}