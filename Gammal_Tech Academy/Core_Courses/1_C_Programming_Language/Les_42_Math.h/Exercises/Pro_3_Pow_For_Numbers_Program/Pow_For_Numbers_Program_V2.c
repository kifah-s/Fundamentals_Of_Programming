

/* >>> Pow For Numbers Program ( Version 2 ) <<< */

/* >>> A program that prints all the numbers D (5, 4, 7, 9, 8, 10, 12, 15) raised once to the power of (2), once to the power (3), and once to the power (5). <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>

void welcomeMassageFun();
void powNumberFun(int num);

int main()
{
    welcomeMassageFun();

    powNumberFun(5);
    powNumberFun(4);
    powNumberFun(7);
    powNumberFun(9);
    powNumberFun(8);
    powNumberFun(10);
    powNumberFun(12);
    powNumberFun(15);

    return 0;
}

// Function;
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Pow For Numbers Program ( Version 2 ) ..\n\n");
}

// Pow number function;
void powNumberFun(int num)
{
    int numPow2 = pow(num, 2);
    printf("%d Pow 2 = %d\n", num, numPow2);

    int numPow3 = pow(num, 3);
    printf("%d Pow 3 = %d\n", num, numPow3);

    int numPow5 = pow(num, 5);
    printf("%d Pow 5 = %d\n\n", num, numPow5);
}