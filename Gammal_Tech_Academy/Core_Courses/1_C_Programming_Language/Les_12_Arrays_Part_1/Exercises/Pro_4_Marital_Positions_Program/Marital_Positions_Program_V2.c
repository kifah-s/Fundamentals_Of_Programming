

/* >>> Marital Positions Program ( Version 2 ) <<< */

/* >>> A program in which array contains 10 digits, prints the numbers in the marital positions inside the array. <<< */

#include <stdio.h>

void welcomeMassageFun();
int maritalPositionsFun();

int main()
{
    welcomeMassageFun();
    maritalPositionsFun();

    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Marital Positions Program ( Version 2 ).. \n\n");
}

// Marital Positions Function;
int maritalPositionsFun()
{
    int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i;

    printf("The Marital Positions is : \n");

    for (i = 0; i < 10; i++)
    {
        if (num[i] % 2 == 0)
        {
            printf("Index : %d\n", i);
        }
    }

    printf("\n\n\n");
}