

/* >>> Digit Number Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter a number, and analyzes the type of this number (how many digits). <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int getNumberFun();
int DigitNumberNumFun(int number);

int main()
{
    welcomeMassageFun();

    int number = getNumberFun();
    // printf("\n%d\n\n", number);

    DigitNumberNumFun(number);

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Digit Number Program ( Version 1 ) ..\n\n");
}

// Get number / function;
int getNumberFun()
{
    int number = 0;
    printf("Please enter a number: ");
    scanf("%d", &number);

    return number;
}

// Digit Number number / function;
int DigitNumberNumFun(int number)
{
    int counter = 0;
    while (number /* number > 0 */)
    {
        number /= 10;
        counter++;
    }
    printf("\nDigit Number = %d\n\n", counter);
}