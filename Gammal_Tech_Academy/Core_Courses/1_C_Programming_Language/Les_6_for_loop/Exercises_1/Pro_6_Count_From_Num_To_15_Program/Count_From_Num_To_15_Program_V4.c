

/* >>> Count From Num To 15 Program ( Version 4 )  <<< */

/* >>> A program that asks the user to enter a number smaller than 15 and then prints all the numbers from this number to the number 15. <<< */

#include <stdio.h>

void welcomeMassageFun();
int gettingNumFun();
int countFromNumTo15Fun(int num);

int main()
{
    welcomeMassageFun();
    int num = gettingNumFun();
    countFromNumTo15Fun(num);
    
    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Count From Num To 15 Program ( Version 4 ) ..\n\n");
}

// Getting number function;
int gettingNumFun()
{
    int num;
    printf("\nEnter any number smaller 15 : ");
    scanf("%d", &num);
    return num;
}

// Count From Num To 15 function;
int countFromNumTo15Fun(int num)
{
    int i;

    for (i = num; i <= 15; i++)
    {
        printf("\n%d", i);
    }
    printf("\n\n\n");
}