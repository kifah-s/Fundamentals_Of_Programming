

/* >>> Reverse Of Numbers Program ( Version 2 ) <<< */

/* >>> A program that asks the user to enter 10 consecutive numbers and prints the numbers as opposed to the order in which the user entered the numbers. <<< */

#include <stdio.h>

void welcomeMassageFun();
int reverseOfNumbersFun();

int main()
{
    welcomeMassageFun();
    reverseOfNumbersFun();

    return 0;
}

// Functions..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Reverse Of Numbers Program ( Version 2 ) .. \n\n");
}

// Reverse Of Numbers function;
int reverseOfNumbersFun()
{
    int i, array[10], num = 10;

    for (i = 0; i < 10; i++)
    {
        printf("Please Enter %d numbers : ", num);
        scanf("%d", &array[i]);
        num--;
    }
    printf("\n");

    for (i = 9; i >= 0; i--)
    {
        printf("%d\n", array[i]);
    }

    printf("\n\n\n");
}