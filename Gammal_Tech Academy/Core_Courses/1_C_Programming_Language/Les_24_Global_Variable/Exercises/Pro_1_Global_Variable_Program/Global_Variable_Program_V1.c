

/* >>> Global Variable Program ( Version - 1 ) <<< */

/* >>> A program that reads one variable and prints it in the main and in function outside the main. <<< */

#include <stdio.h>

// Global variables;
int glo_var = 10;

int global();

int main()
{
    printf("\n\nYou welcome in Global Variable Program ( Version - 1 ) ..\n\n");

    printf("main function : %d\n\n", glo_var);
    global();

    return 0;
}

// Functions;
int global()
{
    printf("global function : %d\n\n\n", glo_var);
}