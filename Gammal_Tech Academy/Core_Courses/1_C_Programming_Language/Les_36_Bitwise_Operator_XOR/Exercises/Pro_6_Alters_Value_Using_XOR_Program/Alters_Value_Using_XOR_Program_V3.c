

/* >>> Alters Value Using XOR Program ( Version 3 ) <<< */

/* >>> A program that alters the value of two variables (using XOR). <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
void altersValueFun(int num1, int num2);

int main()
{
    welcomeMassageFun();

    int num1 = 5;
    int num2 = 10;
    printf("Before Alters Value : num 1 = %d , num 2 = %d\n", num1, num2);

    altersValueFun(num1, num2);

    return 0;
}

// Functions ..
// Welcome massage Function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Alters Value Using XOR Program ( Version 3 ) ..\n\n");
}

// Alters Value function;
void altersValueFun(int num1, int num2)
{
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
    printf("After Alters Value : num 1 = %d , num 2 = %d\n\n", num1, num2);
}