

/* >>> Multiplication Table Program For Any Number ( Version 6 ) <<< */

/* >>> A program that prints Multiplication Table For Any Number (Using While). <<< */

#include <stdio.h>

void welcomeMassageFun();
int getNumberFun();
int MultiplicationTableAnyNumberFunction();

int main()
{
    welcomeMassageFun();

    MultiplicationTableAnyNumberFunction();

    return 0;
}

// Functions..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Multiplication Table Program For Any Number ( Version 6 ) ..\n\n");
}

// get number function;
int getNumberFun()
{
    int num;
    printf("\nPlease enter a number : ");
    scanf("%d", &num);
    return num;
}

// Multiplication Table Any Number Function;
int MultiplicationTableAnyNumberFunction()
{
    int num = getNumberFun();

    int i = 1, result;
    while (i <= 10)
    {
        result = i * num;
        printf("\n%d * %d = %d", i, num, result);
        i++;
    }
    printf("\n\n\n");
}