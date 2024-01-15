

/* >>> Increment Five Program ( Version 3 ) <<< */

/* >>> A program assigns a number in a variable, prints it, and then assigns another variable with the value of the first variable, and it must be incremented by 5. <<< */

#include <stdio.h>

void wel_mas_fun();
void number_fun();
void inc_five_fun();

int main()
{
    wel_mas_fun();
    number_fun();
    inc_five_fun();

    return 0;
}

// Functions ..

// Welcome massage function;
void wel_mas_fun()
{
    printf("\n\nYou welcome in Increment Five Program ( Version 3 ) ..\n\n");
}

// number function;
void number_fun()
{
    int num_1 = 25;
    printf("Before increment : num_1 = %d\n", num_1);

    // return num_1;
}

// Increment five function;
void inc_five_fun()
{
    int num_1;
    num_1 = num_1 + 5;
    printf("After increment : num_1 = %d\n\n\n", num_1);
}