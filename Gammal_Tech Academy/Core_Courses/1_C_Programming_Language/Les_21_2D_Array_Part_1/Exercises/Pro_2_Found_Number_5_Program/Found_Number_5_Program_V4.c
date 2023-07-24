

/* >>> Found Number 5 Program ( Version 4 ) <<< */

/* >>> A program that asks the user to enter a set of numbers and if he finds that there is a number of numbers entered = 5 is applied by "found". <<< */

#include <stdio.h>

void welcomeMassageFun();
int found_number_5();

int main()
{
    welcomeMassageFun();
    found_number_5();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Found Number 5 Program ( Version 4 ) ..\n\n");
}

// found number 5 function;
int found_number_5()
{
    // Definition arrays and counter;
    int arr[3][3], i, j;

    // Receive values from the user;
    printf("Please enter 9 numbers : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    /* // Ensure that the values are stored in the array;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", arr[i][j]);
        }
    }
    */

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (arr[i][j] == 5)
            {
                printf("\nYes i'm found number 5");
            }
        }
    }

    printf("\n\n\n");
}