

/* >>> 1 Var 2 Fun Program ( Version 3 ) <<< */

/* >>> The program reads one variable and prints 2 different functions. <<< */

#include <stdio.h>

// Global variables;
int glo_var;

int fun_1();
int fun_2();

int main()
{
    printf("\n\nYou welcome in 1 Var 2 Fun Program ( Version 3 ) ..\n\n");

    fun_1();
    fun_2();

    return 0;
}

// Functions ..
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