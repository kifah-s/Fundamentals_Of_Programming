

/* >>> Global Variable Program ( Version 3 ) <<< */

/* >>> A program that reads one variable and prints it in the main and in function outside the main. <<< */

#include <stdio.h>

// Global variables;
int glo_var;

int globalFun();

int main()
{
    printf("\n\nYou welcome in Global Variable Program ( Version 3 ) ..\n\n");

    printf("Please enter a number : ");
    scanf("%d", &glo_var);

    printf("\nmain function : %d\n\n", glo_var);

    globalFun();

    return 0;
}

// Functions ..
// global function;
int globalFun()
{
    printf("Please enter a number : ");
    scanf("%d", &glo_var);

    printf("\nglobal function : %d\n\n\n", glo_var);
}