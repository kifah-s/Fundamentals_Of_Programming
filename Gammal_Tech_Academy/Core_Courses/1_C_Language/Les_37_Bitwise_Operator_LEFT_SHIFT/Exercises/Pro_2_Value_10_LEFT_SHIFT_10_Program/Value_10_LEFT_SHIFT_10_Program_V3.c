

/* >>> Value (10 LEFT SHIFT 10) Program ( Version 3 ) <<< */

/* >>> Find the value (10 << 10). <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
int leftShiftFun();

int main()
{
    welcomeMassageFun();

    int result = leftShiftFun();

    printf("10 << 10 = %d\n\n", result);

    return 0;
}

// Function ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Value (10 LEFT SHIFT 10) Program ( Version 3 ) ..\n\n");
}

// left Shift Function;
int leftShiftFun()
{
    int num1 = 10;
    int num2 = 10;

    int result = num1 << num2;
}