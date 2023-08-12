

/* >>> Value (5 RIGHT SHIFT 5) Program ( Version 3 ) <<< */

/* >>> Find the value (5 >> 5). <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
int rightShiftFun();

int main()
{
    welcomeMassageFun();

    int result = rightShiftFun();

    printf("5 >> 5 = %d\n\n", result);

    return 0;
}

// Function ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Value (5 RIGHT SHIFT 5) Program ( Version 3 ) ..\n\n");
}

// right Shift Function;
int rightShiftFun()
{
    int num1 = 5;
    int num2 = 5;

    int result = num1 >> num2;
}