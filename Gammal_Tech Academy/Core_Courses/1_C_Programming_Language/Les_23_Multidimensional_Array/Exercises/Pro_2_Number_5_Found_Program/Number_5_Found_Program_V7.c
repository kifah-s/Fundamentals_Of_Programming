

/* >>> Number 5 Found Program ( Version 7 ) <<< */

/* >>> A program that asks a person to enter 10 digits, if he finds that there is a number of their income = 5 it prints to him "found", if it does not exist "not found" is printed, and after the program will not stop and it will be repeated again. <<< */

#include <stdio.h>

int number_5_found();

int main()
{
    printf("\n\nYou welcome in Number 5 Found Program ( Version 7 ) ..\n\n");

    number_5_found();

    return 0;
}

// Functions ..
// number 5 found function;
int number_5_found()
{
    // Declaration infinite loop ;
    while (1)
    {
        // Declaration the array, counter, variable;
        int arr[2][5], i, j, found = 0;

        // Receive values from the user;
        printf("Please enter ' 10 ' numbers : \n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 5; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }

        // Check for found number 5 in array elements;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 5; j++)
            {
                if (arr[i][j] == 5)
                {
                    found = 1;
                }
            }
        }

        // Found or not found number 5;
        if (found == 1)
        {
            printf("\nYes i'm found number 5\n\n");
        }
        else
        {
            printf("\nOh i'm not found number 5\n\n");
        }
    }
    printf("\n\n\n");
}