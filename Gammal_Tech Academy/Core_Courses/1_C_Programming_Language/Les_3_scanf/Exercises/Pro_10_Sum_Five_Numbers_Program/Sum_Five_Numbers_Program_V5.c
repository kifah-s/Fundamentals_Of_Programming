

/* >>> Sum Five Numbers Program ( Version 5 ) <<< */

/* >>> A program that asks the user to enter 5 digits and print their total <<< */

#include <stdio.h>

void welMasFun();

int firstNumFun();
int secondNumFun();
int thirdNumFun();
int forthNumFun();
int fiveNumFun();

int sumNumFun(int n1, int n2, int n3, int n4, int n5);

int main()
{
    welMasFun();

    int num1 = firstNumFun();
    int num2 = secondNumFun();
    int num3 = thirdNumFun();
    int num4 = forthNumFun();
    int num5 = fiveNumFun();

    printf("\nSum the five numbers is : %d\n\n\n", sumNumFun(num1, num2, num3, num4, num5));

    return 0;
}

// Functions ..
// Welcome massage function;
void welMasFun()
{
    printf("\nYou welcome in Sum Five Numbers Program ( Version 5 ) ..\n\n");
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

// Get five number;
int fiveNumFun()
{
    int n5;
    printf("Enter your fifth number : ");
    scanf("%d", &n5);
    return n5;
}

// Sum numbers function;
int sumNumFun(int n1, int n2, int n3, int n4, int n5)
{
    int result = n1 + n2 + n3 + n4 + n5;
    // printf("\nSum the five numbers is : %d\n\n\n", result);
    return result;
}