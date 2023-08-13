

/* >>> Sqrt For Numbers Program ( Version 4 ) <<< */

/* >>> A program that prints the square root of (4, 9, 16, 25, 36, 144). <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>

void welcomeMassageFun();
void printSqrtNumberFun(int num);

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
    printf("\n\nYou welcome in Sqrt For Numbers Program ( Version 4 ) ..\n\n");
}

// Print sqrt number function;
void printSqrtNumberFun(int num)
{
    printf("Sqrt %d = %.2f\n\n", num, (float)sqrt(num));
}