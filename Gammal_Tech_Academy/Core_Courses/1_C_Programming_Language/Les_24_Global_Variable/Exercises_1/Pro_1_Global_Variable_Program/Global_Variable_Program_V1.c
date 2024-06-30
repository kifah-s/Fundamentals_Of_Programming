

/* >>> Global Variable Program ( Version 1 ) <<< */

/* >>> A program that reads one variable and prints it in the main and in function outside the main. <<< */

#include <stdio.h>

// Global variables;
int glo_var = 10;

int globalFun();

int main()
{
    printf("\n\nYou welcome in Global Variable Program ( Version 1 ) ..\n\n");

    printf("main function : %d\n\n", glo_var);

    globalFun();

    return 0;
}

// Functions ..
// global function;
int globalFun()
{
    printf("global function : %d\n\n\n", glo_var);
}