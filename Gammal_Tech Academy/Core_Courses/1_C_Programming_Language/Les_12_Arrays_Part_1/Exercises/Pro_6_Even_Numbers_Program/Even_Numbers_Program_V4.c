

/* >>> Even Numbers Program ( Version 4 ) <<< */

/* >>> A program in which an array contains 10 numbers and prints the even numbers inside the array. <<< */

#include <stdio.h>

void welcomeMassageFun();
int *getNumbersFun();
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
    printf("\n\nYou welcome in Even Numbers Program( Version 4 ) .. \n\n");
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

// Even Numbers Function;
int evenNumbersFun()
{
    int *array = getNumbersFun();
    int odd = 0;
    printf("Even number is : \n");
    for (int i = 0; i < 10; i++)
    {
        if (array[i] % 2 == 0)
        {
            printf("Num : %d\n", array[i]);
        }
        else
        {
            odd++;
        }
    }
    if (odd == 10)
    {
        printf("There is no even number");
    }
    

    printf("\n\n\n");
}