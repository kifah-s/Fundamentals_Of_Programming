

/* >>> Reverse Number Program ( Version 2 ) <<< */

/* >>> Program that asks the user to enter a number, and prints this number reversed. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int getNumberFun();
void printReverseNumberFun(int number);

int main()
{
    welcomeMassageFun();

    start :
    
    int number = getNumberFun(number);
    // printf("\n%d\n\n", number);

    printReverseNumberFun(number);
    
    goto start;

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Reverse Number Program ( Version 2 ) ..\n\n");
}

// Get number / function;
int getNumberFun(int number)
{
    printf("Please enter a number: ");
    scanf("%d", &number);

    return number;
}

// Print Reverse Number / function;
void printReverseNumberFun(int number)
{
    int num = 0;
    while (number > 0)
    {
        num = num * 10 + number % 10;
        number = number / 10;
    }
    printf("\n%d\n\n", num);
}
