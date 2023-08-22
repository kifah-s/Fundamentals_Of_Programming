

/* >>> Digit Even Number Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter a number and the program counts the number of Even numbers in each number and is repeated from the first time each time (in two different ways). <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int getNumberFun();
int digitEvenNumberFun(int number);

int main()
{
    welcomeMassageFun();

    int number = getNumberFun();
    /* printf("\n%d\n\n", number); */

    digitEvenNumberFun(number);

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Digit Even Number Program ( Version 1 ) ..\n\n");
}

// Get number / function;
int getNumberFun()
{
    int number = 0;
    printf("Please enter a number: ");
    scanf("%d", &number);

    return number;
}

// Digit Even Number / function;
int digitEvenNumberFun(int number)
{
    int counter = 0;
    while (number /* number > 0 */ )
    {
        if (number % 2 == 0)
        {
            counter++;
        }
        number /= 10;
    }
    printf("\nDigit Even Number is: %d\n\n", counter);
}