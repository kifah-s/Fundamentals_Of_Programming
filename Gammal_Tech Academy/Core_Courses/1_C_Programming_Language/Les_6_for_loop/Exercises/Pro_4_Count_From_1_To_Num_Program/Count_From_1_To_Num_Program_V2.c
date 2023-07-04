

/* >>> Count From 1 To Num Program ( Version 2 ) <<< */

/* >>> A program that asks a person to enter any number and applies the numbers from 1 to the number that I enter. <<< */

#include <stdio.h>

void welcomeMassageFun();
int From1ToNumFun();

int main()
{
    welcomeMassageFun();
    From1ToNumFun();

    return 0;
}

// Functions;
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Count From 1 To Num Program ( Version 2 ) ..\n\n");
}

// From 1 To Num function;
int From1ToNumFun()
{
    int i, num;

    printf("Enter any number : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        printf("\n%d", i);
    }
    printf("\n\n\n");
}