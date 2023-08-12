

/* >>> Value (5 RIGHT SHIFT 8) Program ( Version 4 ) <<< */

/* >>> Find the value (5 >> 8). <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
int rightShiftFun();

int main()
{
    welcomeMassageFun();

    rightShiftFun();

    return 0;
}

// Function ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Value (5 RIGHT SHIFT 8) Program ( Version 4 ) ..\n\n");
}

// right Shift Function;
int rightShiftFun()
{
    int num1 = 5;
    int num2 = 8;

    int result = num1 >> num2;

    printf("5 >> 8 = %d\n\n", result);
}