

/* >>> Search In Array Program ( Version 4 ) <<< */

/* >>> A program, in which an array contains 10 digits, asks the user to enter a number and searches inside the array in the place of this number and prints the order of the number in the array on the screen. <<< */

#include <stdio.h>

void welcomeMassageFun();
int getNumberFun();
int searchInArrayFun(int num);

int main()
{
    welcomeMassageFun();
    
    int num = getNumberFun();
    searchInArrayFun(num);

    return 0;
}

// Function ..
// Welcome Massage Function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Search In Array Program ( Version 4 ) .. \n\n");
}

// Get Number Function;
int getNumberFun()
{
    int num;
    printf("Please enter a number from 1 to 10 : ");
    scanf("%d", &num);

    return num;
}

// Search In Array Function;
int searchInArrayFun(int num)
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i;

    for (i = 0; i < 10; i++)
    {
        if (num == arr[i])
        {
            printf("\nThe number index is : %d\n", i);
            printf("The order of the number is : %d\n\n\n", i + 1);
        }
    }
}