

/* >>> Even Numbers Program ( Version 2 ) <<< */

/* >>> A program in which an array contains 10 numbers and prints the even numbers inside the array. <<< */

#include <stdio.h>

void welcomeMassageFun();
int evenNumbersFun();

int main()
{
    welcomeMassageFun();
    evenNumbersFun();

    return 0;
}

// Functions ..
// Welcome massage fun;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Even Numbers Program( Version 2 ) .. \n\n");
}

// Even Numbers Function;
int evenNumbersFun()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i;

    printf("Even number is : \n");
    for (i = 0; i < 10; i++)
    {
        if (array[i] % 2 == 0)
        {
            printf("Num : %d\n", array[i]);
        }
    }

    printf("\n\n\n");
}