

/* >>> Found Number Program ( Version 2 ) <<< */

/* >>> A program in which 2D array contains 20 numbers, asks the user to enter a number, if the number is in the array the program prints "Found". <<< */

#include <stdio.h>

void welcomeMassageFun();
int found_number();

int main()
{
    welcomeMassageFun();
    found_number();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Found Number Program ( Version 2 ) ..\n\n");
}

// found number function;
int found_number()
{
    // Definition array;
    int arr[4][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}};

    // Definition num and counters;
    int num, i, j;

    // Receive values from the user;
    printf("Please enter a number : ");
    scanf("%d", &num);

    // checking for number;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (arr[i][j] == num)
            {
                printf("\nYes i'm found number %d", num);
            }
        }
    }

    printf("\n\n\n");
}