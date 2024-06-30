

/* >>> Equal Or Try Again Program ( Version 2 ) <<< */

/* >>> A program that contains a variable of a certain value and asks the user to enter a number if the number is equal to the value of the variable prints "Equal" if the number is different from the value of the variable asks the user to enter another number. <<< */

#include <stdio.h>

// Global variables;
int glo_var_1 = 10;

void welcomeMassageFun();
int equal_or_try_again();

int main()
{
    welcomeMassageFun();
    equal_or_try_again();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Equal Or Try Again Program ( Version 2 ) ..\n\n");
}

// equal or try again function
int equal_or_try_again()
{
    // Declaration variable;
    int num;

    // Declaration loop;
    while (num != glo_var_1)
    {
        // Receive values from the user;
        printf("Please enter a number : ");
        scanf("%d", &num);

        // Check number;
        if (num == glo_var_1)
        {
            printf("\nYes your number equal global variable number");
        }
    }

    printf("\n\n\n");
}