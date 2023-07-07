

/* >>> From 1 To Num Program ( Version 4 ) <<< */

/* >>> A program that asks a person to enter a number and applies the numbers from 1 to this number (using while). <<< */

#include <stdio.h>

void welcomeMassageFun();
int getNumberFun();
int from1ToNumFun();

int main()
{
    welcomeMassageFun();
    
    from1ToNumFun();

    return 0;
}

// Functions..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in From 1 To Num Program ( Version 4 ) ..\n\n");
}

// Get number function;
int getNumberFun()
{
    int num;
    printf("Please enter a number : ");
    scanf("%d", &num);
    return num;
}

// From 1 To Num function;
int from1ToNumFun()
{
    int num = getNumberFun();

    int i = 1;
    while (i <= num)
    {
        printf("\n%d", i);
        i++;
    }
    printf("\n\n\n");
}