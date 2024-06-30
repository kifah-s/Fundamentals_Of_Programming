

/* >>> 10 Digit Printing Program ( Version 5 ) <<< */

/* >>> A program that asks a person to enter 10 consecutive numbers and when implemented prints each number in a line and prints their total. <<< */

#include <stdio.h>

void welcomeMassageFun();
int *getNumbersFun();
int digitPrintingFun();
int sumFun(int *num);

int main()
{
    welcomeMassageFun();

    digitPrintingFun();

    return 0;
}

// Function..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in 10 Digit Printing Program ( Version 5 ) .. \n\n");
}

// Get numbers function;
int *getNumbersFun()
{
    static int num[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Please Enter a number : ");
        scanf("%d", &num[i]);
    }
    printf("\n");

    return num;
}

// Digit Printing function;
int digitPrintingFun()
{
    int *num = getNumbersFun();

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", num[i]);
    }
    printf("\n");

    sumFun(num);
}

// Sum numbers fun;
int sumFun(int *num)
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum = sum + num[i];
    }
    printf("result = %d\n\n\n", sum);
}