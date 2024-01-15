

/* >>> Sum All Numbers Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter any number and prints to it the numbers from 1 to the of the number that he entered, and prints to it the sum of all numbers from 1 to the number he entered. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int getNumberFun(int number);
void from1ToInputFun(int number);

int main()
{
    welcomeMassageFun();

    int number = 0;
    number = getNumberFun(number);

    from1ToInputFun(number);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Sum All Numbers Program ( Version 1 ) ..\n\n");
}

// Get Number / Function.
int getNumberFun(int number)
{
    printf("Please enter a number: ");
    scanf("%d", &number);

    return number;
}

// From 1 to input / Function.
void from1ToInputFun(int number)
{
    int sum = 0;
    for (int i = 1; i <= number; i++)
    {
        printf("\n%d", i);
        sum += i;
    }
    printf("\n\n");

    printf("Sum numbers from 1 to %d = %d\n\n", number, sum);
}
