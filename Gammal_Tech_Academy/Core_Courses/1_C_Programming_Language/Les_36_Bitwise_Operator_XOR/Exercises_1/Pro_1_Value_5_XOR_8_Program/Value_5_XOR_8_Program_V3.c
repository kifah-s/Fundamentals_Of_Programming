

/* >>> Value (5 XOR 8) Program ( Version 3 ) <<< */

/* >>> Find the value (5 ^ 8). <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
int xorFun();

int main()
{
    welcomeMassageFun();

    int result = xorFun();

    printf("5 ^ 8 = %d\n\n", result);

    return 0;
}

// Function ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Value (5 XOR 8) Program ( Version 3 ) ..\n\n");
}

// xor Function;
int xorFun()
{
    int num1 = 5;
    int num2 = 8;

    int result = num1 ^ num2;
}