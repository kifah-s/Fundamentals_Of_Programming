

/* >>> Increment Five Program ( Version 5 ) <<< */

/* >>> A program assigns a number in a variable, prints it, and then assigns another variable with the value of the first variable, and it must be incremented by 5. <<< */

#include <stdio.h>

void wel_mas_fun();
int number_fun(int num_1);
void inc_five_fun(int num_1);

int main()
{
    wel_mas_fun();
    int number = number_fun(35);
    inc_five_fun(number);

    return 0;
}

// Functions ..

// Welcome massage function;
void wel_mas_fun()
{
    printf("\n\nYou welcome in Increment Five Program ( Version 5 ) ..\n\n");
}

// number function;
int number_fun(int num_1)
{
    printf("Before increment : num_1 = %d\n", num_1);

    return num_1;
}

// Increment five function;
void inc_five_fun(int num_1)
{
    num_1 = num_1 + 5;
    printf("After increment : num_1 = %d\n\n\n", num_1);
}