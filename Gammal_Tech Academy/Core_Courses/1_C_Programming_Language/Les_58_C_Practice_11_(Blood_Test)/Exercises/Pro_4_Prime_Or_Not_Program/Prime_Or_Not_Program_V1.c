

/* >>> Prime Or Not Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter a number, and analyzes the type of this number (prime or not). <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int getNumberFun();
int PrimeOrNotFun(int number);

int main()
{
    welcomeMassageFun();

    int number = getNumberFun();
    // printf("\n%d\n\n", number);

    PrimeOrNotFun(number);

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Prime Or Not Program ( Version 1 ) ..\n\n");
}

// Get number / function;
int getNumberFun()
{
    int number = 0;
    printf("Please enter a number: ");
    scanf("%d", &number);

    return number;
}

// Prime Or Not / function;
int PrimeOrNotFun(int number)
{
    bool primeOrNot = true;
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            primeOrNot = false;
            break;
        }
    }

    if (primeOrNot == true)
    {
        printf("\nThe number \" %d \" is Prime\n\n", number);
    }
    else
    {
        printf("\nThe number \" %d \" is Not prime\n\n", number);
    }
}