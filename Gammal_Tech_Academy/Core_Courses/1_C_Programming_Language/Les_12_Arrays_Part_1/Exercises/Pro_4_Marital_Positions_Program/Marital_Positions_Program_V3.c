

/* >>> Marital Positions Program ( Version 3 ) <<< */

/* >>> A program in which array contains 10 digits, prints the numbers in the marital positions inside the array. <<< */

#include <stdio.h>

void welcomeMassageFun();
int *gettingNumbersFun();
int maritalPositionsFun(int *array);

int main()
{
    welcomeMassageFun();
    int *array = gettingNumbersFun();
    maritalPositionsFun(array);

    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Marital Positions Program ( Version 3 ).. \n\n");
}

// Getting numbers function;
int *gettingNumbersFun()
{
    int num = 10;
    static int array[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Please Enter %d numbers : ", num);
        scanf("%d", &array[i]);
        num--;
    }
    printf("\n");

    return array;
}

// Marital Positions Function;
int maritalPositionsFun(int *array)
{
    int individual = 0;
    
    printf("The Marital Positions is : \n");

    for (int i = 0; i < 10; i++)
    {
        if (array[i] % 2 == 0)
        {
            printf("Index : %d\n", i);
        }
        else
        {
            individual++;
        }
    }
    if (individual == 10)
    {
        printf("OOH, There is no place on the index for any even number");
    }

    printf("\n\n\n");
}