

/* >>> Value (-15 Not) Program ( Version 2 ) <<< */

/* >>> Find the value of ~ (-15). <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
int notFun(int num1);

int main()
{
    welcomeMassageFun();

    int num1 = -15;
    
    num1 = notFun(num1);

    printf("~ -15 = %d\n\n", num1);

    return 0;
}

// Function ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Value (-15 Not) Program ( Version 2 ) ..\n\n");
}

// Not Function;
int notFun(int num1)
{
    num1 = ~ num1;

    return num1;
}