

/* >>> Value (5 OR 20) Program ( Version 4 ) <<< */

/* >>> Find the value (5 | 20). <<< */

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
    printf("\n\nYou welcome in Value (5 OR 20) Program ( Version 4 ) ..\n\n");
}

// or Function;
int orFun()
{
    int num1 = 5;
    int num2 = 20;

    int result = num1 | num2;

    printf("5 | 20 = %d\n\n", result);
}