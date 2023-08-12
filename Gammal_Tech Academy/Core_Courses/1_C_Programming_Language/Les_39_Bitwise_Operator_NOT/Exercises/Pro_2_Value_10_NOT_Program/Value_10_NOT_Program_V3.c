

/* >>> Value (10 NOT) Program ( Version 3 ) <<< */

/* >>> Find the value of ~ (10). <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
int notFun();

int main()
{
    welcomeMassageFun();

    int num1 = notFun();

    printf("~ 10 = %d\n\n", num1);

    return 0;
}

// Function ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Value (10 NOT) Program ( Version 3 ) ..\n\n");
}

// NOT Function;
int notFun()
{
    int num1 = 10;
    
    num1 = ~ num1;

    return num1;
}