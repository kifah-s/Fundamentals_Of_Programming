

/* >>> From First To Second Program ( Version 5 ) <<< */

/* >>> A program that asks a person to enter two numbers smaller than the second and is printed from the first number to the second number (using do.. while ). <<< */

#include <stdio.h>

void welcomeMassageFun();
int getFirstNumberFun();
int getSecondNumberFun();
int fromFirstToSecondFun();

int main()
{
    welcomeMassageFun();

    fromFirstToSecondFun();

    return 0;
}

// Functions;
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in From First \' Smaller Number \' To Second \' Bigger Number \' Program ( Version 5 ) ..\n\n");
}

// Get first number function;
int getFirstNumberFun()
{
    int num_S;
    printf("Please enter first number \' Smaller Number \' : ");
    scanf("%d", &num_S);
    return num_S;
}

// Get second number function;
int getSecondNumberFun()
{
    int num_B;
    printf("Please enter second number \' Bigger Number \' : ");
    scanf("%d", &num_B);
    return num_B;
}

// From First ' Smaller Number ' To Second ' Bigger Number ';
int fromFirstToSecondFun()
{
    int num_S = getFirstNumberFun();
    int num_B = getSecondNumberFun();

    do
    {
        printf("\n%d", num_S);
        num_S++;

    } while (num_S <= num_B);

    printf("\n\n\n");
}