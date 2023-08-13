

/* >>> Pow For Input Program ( Version 3 ) <<< */

/* >>> A program that asks the user to enter a number and print the result of raising the number once to the power (2), once to the power (3), and once to the power (5). <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>

void welcomeMassageFun();
int getNumberFun();
int getPowerFun();
void powNumberFun(int num, int power);

int main()
{
    welcomeMassageFun();

    int num = getNumberFun();
    int power = getPowerFun();
    powNumberFun(num, power);

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Pow For Input Program ( Version 3 ) ..\n\n");
}

// Get number function;
int getNumberFun()
{
    int num = 0;
    printf("Please enter a number : ");
    scanf("%d", &num);
    return num;
}

// Get power function;
int getPowerFun()
{
    int power = 0;
    printf("Please enter a Power : ");
    scanf("%d", &power);
    return power;
}

// Pow number function;
void powNumberFun(int num, int power)
{
    int numPow = pow(num, power);
    printf("%d Pow %d = %d\n", num, power, numPow);
}