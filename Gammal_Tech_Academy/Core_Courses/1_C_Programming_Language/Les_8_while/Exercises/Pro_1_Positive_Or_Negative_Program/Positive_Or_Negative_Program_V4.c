

/* >>> Positive Or Negative Program ( Version 4 ) <<< */

/* >>> A program that asks a person to enter different numbers if the number is positive and his side applies the word "is positive" and if he negatively applies the number and his side applies the word "is negative" and the program closes to what enters 0 (using while). <<< */

#include <stdio.h>

void welcomeMassageFun();
int getNumberFun();
int PositiveOrNegativeFun();

int main()
{
    welcomeMassageFun();

    int num = getNumberFun();
    PositiveOrNegativeFun(num);

    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Positive Or Negative Program ( Version 4 ) ..\n\n");
}

// Get number function;
int getNumberFun()
{
    int num;
    printf("Please enter a number : ");
    scanf("%d", &num);
    return num;
}

// Positive Or Negative function;
int PositiveOrNegativeFun(int num)
{
    while (num != 0)
    {
        while (num > 0)
        {
            printf("\nThis is number ( %d ) : Positive", num);
            printf("\n\nPlease enter a number : ");
            scanf("%d", &num);
        }

        while (num < 0)
        {
            printf("\nThis is number ( %d ) : Negative", num);
            printf("\n\nPlease enter a number : ");
            scanf("%d", &num);
        }
    }
    printf("\n\n");
}