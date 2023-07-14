

/* >>> Individual Positions Program ( Version 4 ) <<< */

/* >>> A program in which array contains 10 digits, and prints the numbers in the individual positions inside the array. <<< */

#include <stdio.h>

void welcomeMassageFun();
int *getNumbersFun();
int individualPositionsFun();

int main()
{
    welcomeMassageFun();

    individualPositionsFun();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Individual Positions Program ( Version 4 ) .. \n\n");
}

// Get numbers function;
int *getNumbersFun()
{
    int num = 10;
    static int array[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Please enter %d numbers : ", num);
        scanf("%d", &array[i]);
        num--;
    }
    printf("\n");

    return array;
}

// Individual Positions function;
int individualPositionsFun()
{
    int *array = getNumbersFun();

    int marital = 0;

    printf("The individual Positions is : \n");

    for (int i = 0; i < 10; i++)
    {
        if (array[i] % 2 != 0)
        {
            printf("Index : %d\n", i);
        }
        else
        {
            marital++;
        }
    }
    if (marital == 10)
    {
        printf("OOH, There is no place on the index for any odd number");
    }

    printf("\n\n\n");
}