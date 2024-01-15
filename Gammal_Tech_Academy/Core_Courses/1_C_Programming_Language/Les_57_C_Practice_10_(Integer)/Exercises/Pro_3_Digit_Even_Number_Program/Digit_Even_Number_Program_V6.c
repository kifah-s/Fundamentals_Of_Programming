

/* >>> Digit Even Number Program ( Version 6 ) <<< */

/* >>> A program that asks the user to enter a number and the program counts the number of Even numbers in each number and is repeated from the first time each time (in two different ways). <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int digitEvenNumberFun();

int main()
{
    welcomeMassageFun();

    digitEvenNumberFun();

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Digit Even Number Program ( Version 6 ) ..\n\n");
}

// Digit Even Number / function;
int digitEvenNumberFun()
{
    for (; true;)
    {
        int number = 0, counter = 0;
        printf("Please enter a number: ");
        scanf("%d", &number);

        for (; number /* number > 0 */ ;)
        {
            if (number % 2 == 0)
            {
                counter++;
            }

            number /= 10;
        }
        printf("\nDigit Even Number is: %d\n\n", counter);
    }
}