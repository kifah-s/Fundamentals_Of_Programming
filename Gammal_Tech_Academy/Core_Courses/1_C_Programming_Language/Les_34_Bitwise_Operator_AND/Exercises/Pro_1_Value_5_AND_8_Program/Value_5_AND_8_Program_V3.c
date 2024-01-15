

/* >>> Value (5 AND 8) Program ( Version 3 ) <<< */

/* >>> Find the value (5 & 8). <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
int andFun();

int main()
{
    welcomeMassageFun();

    int result = andFun();

    printf("5 & 8 = %d\n\n", result);

    return 0;
}

// Function ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Value (5 AND 8) Program ( Version 3 ) ..\n\n");
}

// And Function;
int andFun()
{
    int num1 = 5;
    int num2 = 8;

    int result = num1 & num2;
}