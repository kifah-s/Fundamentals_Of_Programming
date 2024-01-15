

/* >>> Global Variable Program ( Version 2 ) <<< */

/* >>> A program that reads one variable and prints it in the main and in function outside the main. <<< */

#include <stdio.h>

// Global variables;
int glo_var = 10;

void welcomeMassageFun();
int globalFun();

int main()
{
    welcomeMassageFun();

    printf("main function : %d\n\n", glo_var);

    globalFun();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Global Variable Program ( Version 2 ) ..\n\n");
}

// global function;
int globalFun()
{
    printf("global function : %d\n\n\n", glo_var);
}