

//* Sorts Positions Program (Version 2).

/*
 * Write a program that counts the occurrences of a specific car brand,
 * and sorts their positions in ascending order using a function and arrays.
 */

/*
! Input:
! Please enter brand: BMW

! Output:
! Positions of car of brand BMW: 2 5
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void sortPositions(int positions[], int size);
void displayAndSortPositions(char brands[][100], int size, char searchBrand[]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    char brands[][100] = {"Mercedes", "BMW", "Mazda", "Mercedes", "BMW", "Mercedes"};
    char searchBrand[100];

    printf("Enter the brand: ");
    scanf("%s", searchBrand);

    displayAndSortPositions(brands, 6, searchBrand);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sorts Positions Program (Version 2) ..\n\n");
}

void sortPositions(int positions[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (positions[j] > positions[j + 1])
            {
                int temp = positions[j];
                positions[j] = positions[j + 1];
                positions[j + 1] = temp;
            }
        }
    }
}

void displayAndSortPositions(char brands[][100], int size, char searchBrand[])
{
    int positions[20];
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (strcmp(searchBrand, brands[i]) == 0)
        {
            positions[count++] = i + 1;
        }
    }

    if (count > 0)
    {
        printf("Positions of cars of brand %s: ", searchBrand);

        sortPositions(positions, count);

        for (int i = 0; i < count; i++)
        {
            printf("%d ", positions[i]);
        }

        printf("\n");
    }
    else
    {
        printf("No cars found of brand %s\n", searchBrand);
    }
}

//* End Function ..
