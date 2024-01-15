

/* >>> Value (10 OR 10) Program ( Version 2 ) <<< */

/* >>> Find the value (10 | 10). <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
int orFun(int num1, int num2);

int main()
{
    welcomeMassageFun();

    int num1 = 10;
    int num2 = 10;
    
    int result = orFun(num1, num2);

    printf("10 | 10 = %d\n\n", result);

    return 0;
}

// Function ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Value (10 OR 10) Program ( Version 2 ) ..\n\n");
}

// or Function;
int orFun(int num1, int num2)
{
    int result = num1 | num2;
}