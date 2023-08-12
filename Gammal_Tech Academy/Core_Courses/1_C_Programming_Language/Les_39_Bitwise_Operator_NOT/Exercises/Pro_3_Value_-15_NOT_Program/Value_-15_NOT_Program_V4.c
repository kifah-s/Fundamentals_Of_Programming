

/* >>> Value (-15 NOT) Program ( Version 4 ) <<< */

/* >>> Find the value of ~ (- 15). <<< */

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
    printf("\n\nYou welcome in Value (-15 NOT) Program ( Version 4 ) ..\n\n");
}

// Not Function;
int notFun()
{
    int num1 = -15;

    num1 = ~ num1;

    printf("~ -15 = %d\n\n", num1);
}