

/* >>> Value (10 OR 10) Program ( Version 4 ) <<< */

/* >>> Find the value (10 | 10). <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
int orFun();

int main()
{
    welcomeMassageFun();

    orFun();

    return 0;
}

// Function ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Value (10 OR 10) Program ( Version 4 ) ..\n\n");
}

// or Function;
int orFun()
{
    int num1 = 10;
    int num2 = 10;

    int result = num1 | num2;

    printf("10 | 10 = %d\n\n", result);
}