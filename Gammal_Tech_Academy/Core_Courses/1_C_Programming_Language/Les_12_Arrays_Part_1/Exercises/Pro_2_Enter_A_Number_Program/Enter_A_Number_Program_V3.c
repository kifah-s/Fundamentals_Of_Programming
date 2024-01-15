

/* >>> Enter A Number Program ( Version 3 ) <<< */

/* >>> A program that asks a person to enter a number that reflects the number he will enter thereafter and records the numbers, prints them and prints their totality. <<< */

#include <stdio.h>

void welcomeMassageFun();
int getSizeOfArray();
int *getElementsOfArray(int sizeArray);
int printAndSumElementsOfArrayFun(int *elementsArray, int sizeArray);

int main()
{
    welcomeMassageFun();

    int sizeArray = getSizeOfArray();
    int *elementsArray = getElementsOfArray(sizeArray);
    printAndSumElementsOfArrayFun(elementsArray, sizeArray);

    return 0;
}

// Functions..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Enter A Number Program ( Version 3 ) .. \n\n");
}

// get size of array function;
int getSizeOfArray()
{
    int sizeArray;
    printf("Please enter the number of numbers you want to enter : ");
    scanf("%d", &sizeArray);
    return sizeArray;
}

// get elements of array function;
int *getElementsOfArray(int sizeArray)
{
    static int elementsArray[10];
    for (int i = 0; i < sizeArray; i++)
    {
        printf("Please Enter a number : ");
        scanf("%d", &elementsArray[i]);
    }
    printf("\n");

    return elementsArray;
}

// print and sum elements of array function;
int printAndSumElementsOfArrayFun(int *elementsArray, int sizeArray)
{
    int sum = 0;
    for (int i = 0; i < sizeArray; i++)
    {
        printf("%d\n", elementsArray[i]);
        sum = sum + elementsArray[i];
    }
    printf("\nresult = %d\n\n\n", sum);

    printf("\n");
}