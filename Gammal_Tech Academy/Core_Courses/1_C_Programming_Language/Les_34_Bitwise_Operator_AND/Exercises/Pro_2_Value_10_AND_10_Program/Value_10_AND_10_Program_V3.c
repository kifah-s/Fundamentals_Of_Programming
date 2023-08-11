

/* >>> Value (10 AND 10) Program ( Version 3 ) <<< */

/* >>> Find the value (10 & 10). <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
int andFun();

int main()
{
    welcomeMassageFun();

    int result = andFun();

    printf("10 & 10 = %d\n\n", result);

    return 0;
}

// Function ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Value (10 AND 10) Program ( Version 3 ) ..\n\n");
}

// And Function;
int andFun()
{
    int num1 = 10;
    int num2 = 10;

    int result = num1 & num2;
}