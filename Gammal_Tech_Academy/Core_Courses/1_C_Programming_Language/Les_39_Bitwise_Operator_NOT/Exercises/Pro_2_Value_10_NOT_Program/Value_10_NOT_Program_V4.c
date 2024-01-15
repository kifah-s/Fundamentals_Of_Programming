

/* >>> Value (10 NOT) Program ( Version 4 ) <<< */

/* >>> Find the value of ~ (10). <<< */

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
    printf("\n\nYou welcome in Value (10 NOT) Program ( Version 4 ) ..\n\n");
}

// Not Function;
int notFun()
{
    int num1 = 10;

    num1 = ~ num1;

    printf("~ 10 = %d\n\n", num1);
}