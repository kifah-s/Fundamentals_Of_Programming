

/* >>> Value (5 AND 20) Program ( Version 3 ) <<< */

/* >>> Find the value (5 & 20). <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
int andFun();

int main()
{
    welcomeMassageFun();

    int result = andFun();

    printf("5 & 20 = %d\n\n", result);

    return 0;
}

// Function ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Value (5 AND 20) Program ( Version 3 ) ..\n\n");
}

// And Function;
int andFun()
{
    int num1 = 5;
    int num2 = 20;

    int result = num1 & num2;
}