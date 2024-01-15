

/* >>> Multiplication Table Program For Any Number ( Version 4 ) <<< */

/* >>> A program that prints Multiplication Table For Any Number (Using While). <<< */

#include <stdio.h>

void welcomeMassageFun();
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
    printf("\n\nYou welcome in Multiplication Table Program For Any Number ( Version 4 ) ..\n\n");
}

// Multiplication Table Any Number Function;
int MultiplicationTableAnyNumberFunction()
{
    int i = 1, num, result;

    printf("\nPlease enter a number : ");
    scanf("%d", &num);

    while (i <= 10)
    {
        result = i * num;
        printf("\n%d * %d = %d", i, num, result);
        i++;
    }
    printf("\n\n\n");
}