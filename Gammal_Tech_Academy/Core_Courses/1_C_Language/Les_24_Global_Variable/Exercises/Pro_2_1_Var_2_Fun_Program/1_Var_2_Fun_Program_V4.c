

/* >>> 1 Var 2 Fun Program ( Version 4 ) <<< */

/* >>> The program reads one variable and prints 2 different functions. <<< */

#include <stdio.h>

// Global variables;
int glo_var;

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
    printf("\n\nYou welcome in 1 Var 2 Fun Program ( Version 4 ) ..\n\n");
}

// Function 1;
int fun_1()
{
    printf("Please enter a number : ");
    scanf("%d", &glo_var);
    printf("\nFunction 1 : %d\n\n", glo_var);
}

// Function 2;
int fun_2()
{
    printf("Please enter a number : ");
    scanf("%d", &glo_var);
    printf("\nFunction 2 : %d\n\n\n", glo_var);
}