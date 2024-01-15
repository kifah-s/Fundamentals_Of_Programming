

/* >>> From First To Second Program ( Version 1 ) <<< */

/* >>> A program that asks the user to write a sentence with a maximum of 50 characters and count the number of vowel characters. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int getNumber_1Fun(int number_1);
int getNumber_2Fun(int number_2);
void fromFirstToSecondFun(int number_1, int number_2);

int main()
{
    welcomeMassageFun();

    int number_1 = getNumber_1Fun(number_1);
    int number_2 = getNumber_2Fun(number_2);

    fromFirstToSecondFun(number_1, number_2);

    return 0;
}

// Functions ..
// Welcome massage / function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in From First To Second Program ( Version 1 ) ..\n\n");
}

// Get number 1 / Function.
int getNumber_1Fun(int number_1)
{
    printf("Please enter a number 1: ");
    scanf("%d", &number_1);

    return number_1;
}

// Get number 2 / Function.
int getNumber_2Fun(int number_2)
{
    printf("Please enter a number 2: ");
    scanf("%d", &number_2);

    return number_2;
}

// From First To Second / Function.
void fromFirstToSecondFun(int number_1, int number_2)
{
    if (number_1 < number_2)
    {
        for (int i = number_1; i <= number_2; i++)
        {
            printf("%d\n", i);
        }
        printf("\n\n");
    }
    else if (number_1 > number_2)
    {
        for (int i = number_1; i >= number_2; i--)
        {
            printf("%d\n", i);
        }
        printf("\n\n");
    }
}