

/* >>> Multiplication Table Program ( Version 1 ) <<< */

/* >>> A program that asks the person to enter a number and prints the multiplication table of this number from 1:10. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int getNumberFun(int number);
void multiplicationTableFun(int number);

int main()
{
    welcomeMassageFun();

    int number = 0;
    number = getNumberFun(number);

    multiplicationTableFun(number);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Multiplication Table Program ( Version 1 ) ..\n\n");
}

// Get Number / Function.
int getNumberFun(int number)
{
    printf("Please enter a number: ");
    scanf("%d", &number);

    return number;
}

// Multiplication Table / Function.
void multiplicationTableFun(int number)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", i, number, i * number);
    }
    printf("\n\n");
}
