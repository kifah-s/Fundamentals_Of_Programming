

/* >>> From 1 To Num Program ( Version 2 ) <<< */

/* >>> A program that asks a person to enter a number and applies the numbers from 1 to this number (using while). <<< */

#include <stdio.h>

void welcomeMassageFun();
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
    printf("\n\nYou welcome in From 1 To Num Program ( Version 2 ) ..\n\n");
}

// From 1 To Num function;
int from1ToNumFun()
{
    int i = 1, num;

    printf("Please enter a number : ");
    scanf("%d", &num);

    while (i <= num)
    {
        printf("\n%d", i);
        i++;
    }
    printf("\n\n\n");
}