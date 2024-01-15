

/* >>> Mathematical Calculations Program ( Version 4 ) <<< */

/* >>> A program that takes 4 numbers from the user and combines the first two numbers, then subtracts the third number, then multiplies it by the fourth number and prints the result. <<< */

#include <stdio.h>

void welMasFun();

int firstNumFun();
int secondNumFun();
int thirdNumFun();
int forthNumFun();

int mathCalcFun(int n1, int n2, int n3, int n4);

int main()
{
    welMasFun();

    mathCalcFun(forthNumFun(), thirdNumFun(), secondNumFun(), firstNumFun());

    return 0;
}

// Functions ..
// Welcome massage function;
void welMasFun()
{
    printf("\n\nYou welcome in Mathematical Calculations Program ( Version 4 ) ..\n\n");
}

// Get first number;
int firstNumFun()
{
    int n1;
    printf("Enter a first number : ");
    scanf("%d", &n1);
    return n1;
}

// Get second number;
int secondNumFun()
{
    int n2;
    printf("Enter a second number : ");
    scanf("%d", &n2);
    return n2;
}

// Get third number;
int thirdNumFun()
{
    int n3;
    printf("Enter the third number : ");
    scanf("%d", &n3);
    return n3;
}

// Get forth number;
int forthNumFun()
{
    int n4;
    printf("Enter your fourth number : ");
    scanf("%d", &n4);
    return n4;
}

// Mathematical Calculations function;
int mathCalcFun(int n1, int n2, int n3, int n4)
{
    int result = (n1 + n2 - n3) * n4;
    printf("\nResult is : %d\n\n\n", result);
}