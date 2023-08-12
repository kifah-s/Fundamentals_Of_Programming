

/* >>> Value (8 NOT) Program ( Version 4 ) <<< */

/* >>> Find the value (5 >> 8). <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
int notFun();

int main()
{
    welcomeMassageFun();

    notFun();

    return 0;
}

// Function ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Value (8 NOT) Program ( Version 4 ) ..\n\n");
}

// right Shift Function;
int notFun()
{
    int num1 = 8;

    num1 = ~ num1;

    printf("~ 8 = %d\n\n", num1);
}