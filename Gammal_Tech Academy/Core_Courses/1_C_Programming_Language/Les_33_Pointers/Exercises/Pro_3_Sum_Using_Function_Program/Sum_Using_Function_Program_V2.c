

/* >>> Sum Using Function Program ( Version 2 ) <<< */

/* >>> A program that asks the user to enter two values, its function is that it collects the values that the user entered (using function). <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
int sumVariableFun(int num1, int num2);

int main()
{
    welcomeMassageFun();

    // Declare variables;
    int num1 = 0, num2 = 0;

    // Receive value from user;
    printf("Please enter two numbers : \n");

    printf("Number 1 : ");
    scanf("%d", &num1);

    printf("Number 2 : ");
    scanf("%d", &num2);

    // Printing sum;
    printf("\nNumber 1 + Number 2 = %d\n\n", sumVariableFun(num1, num2));

    return 0;
}

// Functions ..
// Welcome Massage Function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Sum Using Function Program ( Version 2 ) ..\n\n");
}

// sum Variable function;
int sumVariableFun(int num1, int num2)
{
    // Declare variables;
    int sumVariable = 0;

    // sum variables;
    sumVariable = num1 + num2;
}