

/* >>> From 1 To Input Program ( Version 6 ) <<< */

/* >>> A program that requests the user to enter a number in a function that prints the numbers from 1 to the user's income number. <<< */

#include <stdio.h>

void welcomeMassageFun();
int getNumberFun();
int from_1_to_input();

int main()
{
    from_1_to_input();

    return 0;
}

// Functions ..
// Welcome Massage Function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in From 1 To Input Program ( Version 6 ) .. \n\n");
}

// Get number function;
int getNumberFun()
{
    int num;
    printf("Please enter a number : ");
    scanf("%d", &num);

    return num;
}

// from 1 to input function;
int from_1_to_input()
{
    welcomeMassageFun();

    int num = getNumberFun();

    for (int i = 1; i <= num; i++)
    {
        printf("\n%d", i);
    }

    printf("\n\n\n");
}
