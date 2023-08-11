

/* >>> Sum Using Function Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter two values, its function is that it collects the values that the user entered (using function). <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
void sumVariableFun();

int main()
{
    welcomeMassageFun();
    sumVariableFun();

    return 0;
}

// Functions ..
// Welcome Massage Function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Sum Using Function Program ( Version 1 ) ..\n\n");
}

// sum Variable function;
void sumVariableFun()
{
    // Declare variables;
    int num1 = 0, num2 = 0, sumVariable = 0;

    // Receive value from user;
    printf("Please enter two numbers : \n");

    printf("Number 1 : ");
    scanf("%d", &num1);

    printf("Number 2 : ");
    scanf("%d", &num2);

    // sum variables;
    sumVariable = num1 + num2;

    // Printing sum;
    printf("\nNumber 1 + Number 2 = %d\n\n", sumVariable);
}