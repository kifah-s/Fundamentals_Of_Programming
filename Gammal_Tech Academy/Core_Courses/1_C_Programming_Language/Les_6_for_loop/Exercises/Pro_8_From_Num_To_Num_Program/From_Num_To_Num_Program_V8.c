

/* >>> From Num To Num Program ( Version 8 ) <<< */

/* >>> A program that asks a person to enter two numbers, second one smaller than the first one; then prints the numbers from to first one to the second one. <<< */

#include <stdio.h>

void welcomeMassageFun();
int gettingFirstNumberFun();
int gettingSecondNumberFun();
int fromNumToNumFun();

int main()
{

    fromNumToNumFun();

    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in From Num To Num Program ( Version 8 ) ..\n\n");
}

// Getting first number function;
int gettingFirstNumberFun()
{
    int num_1;
    printf("\nEnter the first number : ");
    scanf("%d", &num_1);
    return num_1;
}

// Getting second number function;
int gettingSecondNumberFun()
{
    int num_2;
    printf("\nEnter the second number : ");
    scanf("%d", &num_2);
    return num_2;
}

// From Num To Num function;
int fromNumToNumFun()
{
    welcomeMassageFun();

    int num_1 = gettingFirstNumberFun();
    int num_2 = gettingSecondNumberFun();

    if (num_1 > num_2)
    {
        for (int i = num_2; i <= num_1; i++)
        {
            printf("\n%d", i);
        }
    }
    else if (num_1 < num_2)
    {
        for (int i = num_1; i <= num_2; i++)
        {
            printf("\n%d", i);
        }
    }
    else
    {
        printf("\nfirst number %d == second number %d\n", num_1, num_2);
    }
    printf("\n\n\n");
}