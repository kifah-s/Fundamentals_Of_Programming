

/* >>> Greater Or Smaller Than 20 Program ( Version 4 ) <<< */

/* >>> A program that requests the user to enter a number if the number is greater than 20 prints all the numbers from 20 to this number, and if smaller than 20 prints all the numbers from this number to 20. <<< */

#include <stdio.h>

void welcomeMassageFun();
int getNumberFun();
int numberGreater20Fun(int num);
int numberSmaller20Fun(int num);
int numberEqual20Fun(int num);

int main()
{
    welcomeMassageFun();

    int num = getNumberFun();
    numberGreater20Fun(num);
    numberSmaller20Fun(num);
    numberEqual20Fun(num);
    
    return 0;
}

// Function..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Greater Or Smaller Than 20 Program ( Version 4 ) ..\n\n");
}

// Get Number Function;
int getNumberFun()
{
    int num;
    printf("Please enter number : ");
    scanf("%d", &num);
    return num;
}

// Number greater 20 function;
int numberGreater20Fun(int num)
{
    int i = 20;
    if (num > 20)
    {
        do
        {
            printf("\n%d", i);
            i++;
            num--;
        } while (num >= 20);
    }
}

// Number smaller 20 function;
int numberSmaller20Fun(int num)
{
    if (num < 20)
    {
        do
        {
            printf("\n%d", num);
            num++;
        } while (num <= 20);
    }
}

// Number Equal 20 function;
int numberEqual20Fun(int num)
{
    if (num == 20)
    {
        {
            printf("\n%d = 20", num);
        }
    }
    printf("\n\n\n");
}

/* // Greater Or Smaller Than 20 function;
int greaterOrSmallerThan20Fun(int num)
{
} */