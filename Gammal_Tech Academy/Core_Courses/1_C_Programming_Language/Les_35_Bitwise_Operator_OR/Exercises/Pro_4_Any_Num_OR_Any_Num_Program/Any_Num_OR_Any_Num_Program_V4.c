

/* >>> Any Num OR Any Num Program ( Version 4 ) <<< */

/* >>> A program that asks the user to enter two values, then it prints the result of | between these two numbers. <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
int getNumber1Fun();
int getNumber2Fun();
int orFun();

int main()
{
    welcomeMassageFun();

    int num1 = getNumber1Fun();
    int num2 = getNumber2Fun();

    orFun(num1, num2);

    return 0;
}

// Function ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Any Num OR Any Num Program ( Version 4 ) ..\n\n");
}

// get number1 function;
int getNumber1Fun()
{
    int num1 = 0;

    printf("Please enter number 1 : ");
    scanf("%d", &num1);
}

// get number2 function;
int getNumber2Fun()
{
    int num2 = 0;

    printf("Please enter number 2 : ");
    scanf("%d", &num2);
}

// or Function;
int orFun(int num1, int num2)
{
    int result = num1 | num2;

    printf("\n%d | %d = %d\n\n", num1, num2, result);
}