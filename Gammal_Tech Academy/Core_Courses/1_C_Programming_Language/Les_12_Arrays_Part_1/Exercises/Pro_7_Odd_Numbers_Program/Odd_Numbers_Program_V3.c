

/* >>> Odd Numbers Program ( Version 3 ) <<< */

/* >>> A program that contains an array of 10 numbers and prints the odd numbers inside the array. <<< */

#include <stdio.h>

void welcomeMassageFun();
int *getNumbersFun();
int oddNumbersFun(int *array);

int main()
{
    welcomeMassageFun();

    int *array = getNumbersFun();
    oddNumbersFun(array);
    
    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Odd Numbers Program ( Version 3 ) .. \n\n");
}

// Get numbers function;
int *getNumbersFun()
{
    int num = 10;
    static int array[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Please enter %d number : ", num);
        scanf("%d", &array[i]);
        num--;
    }
    printf("\n");

    return array;
}

// Odd Numbers function;
int oddNumbersFun(int *array)
{
    int even = 0;
    printf("Odd number is : \n");
    for (int i = 0; i < 10; i++)
    {
        if (array[i] % 2 == 0)
        {
            printf("Num : %d\n", array[i]);
        }
        else
        {
            even++;
        }
    }
    if (even == 10)
    {
        printf("There is no odd number");
    }

    printf("\n\n\n");
}