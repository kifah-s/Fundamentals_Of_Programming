

/* >>> Sum From 1 To Num Program ( Version 3 ) <<< */

/* >>> A program that asks a person to enter any number and applies the numbers from 1 to the number that you enter and prints the total numbers from 1 to the number that you enter (using while). <<< */

#include <stdio.h>

void welcomeMassageFun();
int getNumberFun();
int sumFrom1ToNumFun(int num);

int main()
{
    welcomeMassageFun();
    int num = getNumberFun();
    sumFrom1ToNumFun(num);

    return 0;
}

// Functions..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Sum From 1 To Num Program ( Version 3 ) ..\n\n");
}

// Get Number Function;
int getNumberFun()
{
    int num;
    printf("Please enter a number : ");
    scanf("%d", &num);
    return num;
}

// Sum From 1 To Num function;
int sumFrom1ToNumFun(int num)
{
    int i = 1, sum = 0;
    while (i <= num)
    {
        printf("\n%d", i);
        sum = sum + i;
        i++;
    }
    printf("\n\nResult sum numbers from 1 to %d =  %d\n", num, sum);

    printf("\n\n");
}