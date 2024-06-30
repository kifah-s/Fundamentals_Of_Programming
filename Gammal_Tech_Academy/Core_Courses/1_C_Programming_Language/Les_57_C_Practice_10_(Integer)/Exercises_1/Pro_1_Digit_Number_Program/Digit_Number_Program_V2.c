

/* >>> Digit Number Program ( Version 2 ) <<< */

/* >>> A program that asks the user to enter a number and the program counts the number of prime numbers in each number and is repeated from the first time each time (in two different ways). <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int digitNumberFun();

int main()
{
    welcomeMassageFun();

    digitNumberFun();

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Digit Number Program ( Version 2 ) ..\n\n");
}

// Digit Number / function;
int digitNumberFun()
{
    start:

    int number = 0,  counter = 0;
    printf("Please enter a number: ");
    scanf("%d", &number);

    while (number /* number > 0 */ )
    {
        number /= 10;
        counter++;
    }
    printf("\nDigit Number is: %d\n\n", counter);
    
    goto start;
}