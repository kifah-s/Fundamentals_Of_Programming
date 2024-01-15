

/* >>> Even Or Odd Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter a number, and analyzes the type of this number (even or odd). <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int getNumberFun();
int evenOrOddNumFun(int number);

int main()
{
    welcomeMassageFun();

    int number = getNumberFun();
    // printf("\n%d\n\n", number);

    evenOrOddNumFun(number);

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Even Or Odd Program ( Version 1 ) ..\n\n");
}

// Get number / function;
int getNumberFun()
{
    int number = 0;
    printf("Please enter a number: ");
    scanf("%d", &number);

    return number;
}

// Even Or Odd number / function;
int evenOrOddNumFun(int number)
{
    if (number % 2 == 0)
    {
        printf("\nThe number \" %d \" is even\n\n", number);
    }
    else
    {
        printf("\nThe number \" %d \" is Odd\n\n", number);
    }
}