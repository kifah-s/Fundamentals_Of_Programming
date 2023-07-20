

/* >>> Any Num From Bin To Dec Program ( Version 5 ) <<< */

/* >>> A program that asks the user to enter a binary number and converts that number to decimal. <<< */

#include <stdio.h>

void welcomeMassageFun();
int getNumberFun();
int binary_to_decimal();

int main()
{
    welcomeMassageFun();
    
    binary_to_decimal();

    return 0;
}

// Functions ..
// Welcome Massage Function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Any Num From Bin To Dec Program ( Version 5 ) ..\n\n");
}

// Get Number Function;
int getNumberFun()
{
    int binary;
    printf("Enter a binary number : ");
    scanf("%d", &binary);

    return binary;
}

// binary to decimal function;
int binary_to_decimal()
{
    int binary = getNumberFun();

    int decimal = 0, y = 1;

    while (binary)
    {
        decimal += (binary % 10) * y;
        binary /= 10;
        y *= 2;
    }
    printf("\nThe decimal number is : %d\n\n\n", decimal);

    return 0;
}