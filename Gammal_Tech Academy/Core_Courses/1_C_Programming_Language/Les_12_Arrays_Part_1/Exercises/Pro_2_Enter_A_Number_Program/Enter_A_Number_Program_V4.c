

/* >>> Enter A Number Program ( Version 4 ) <<< */

/* >>> A program that asks a person to enter a number that reflects the number he will enter thereafter and records the numbers, prints them and prints their totality. <<< */

#include <stdio.h>

void welcomeMassageFun();
int getSizeOfArray();
int *getElementsOfArray(int sizeArray);
int printElementsOfArrayFun(int *elementsArray, int sizeArray);
int sumElementsOfArrayFun(int *elementsArray, int sizeArray);

int main()
{
    welcomeMassageFun();

    int sizeArray = getSizeOfArray();
    int *elementsArray = getElementsOfArray(sizeArray);
    printElementsOfArrayFun(elementsArray, sizeArray);
    sumElementsOfArrayFun(elementsArray, sizeArray);

    return 0;
}

// Functions..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Enter A Number Program ( Version 4 ) .. \n\n");
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

// print elements of array function;
int printElementsOfArrayFun(int *elementsArray, int sizeArray)
{
    for (int i = 0; i < sizeArray; i++)
    {
        printf("%d\n", elementsArray[i]);
    }
    printf("\n");
}

// sum elements of array function;
int sumElementsOfArrayFun(int *elementsArray, int sizeArray)
{
    int sum = 0;
    for (int i = 0; i < sizeArray; i++)
    {
        sum = sum + elementsArray[i];
    }
    printf("result = %d\n\n\n", sum);
}