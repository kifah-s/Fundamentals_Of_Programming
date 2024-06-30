

/* >>> 1 Var 2 Fun Program ( Version 2 ) <<< */

/* >>> The program reads one variable and prints 2 different functions. <<< */

#include <stdio.h>

// Global variables;
int glo_var = 10;

void welcomeMassageFun();
int fun_1();
int fun_2();

int main()
{
    welcomeMassageFun();
    
    fun_1();
    fun_2();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in 1 Var 2 Fun Program ( Version 2 ) ..\n\n");
}

// function 1;
int fun_1()
{
    printf("Function 1 : %d\n\n", glo_var);
}

// function 2;
int fun_2()
{
    printf("Function 2 : %d\n\n\n", glo_var);
}