

/* >>> Between 1 And 10 Program ( Version 2 ) <<< */

/* >>> The program requires the user to enter a number from 1 to 10 then it prints the numbers from 1 to the number entered by the user and each number is repeated at the same value. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int getNumberBetween1And10Fun();
int printNumbersFun(int number);

int main()
{
    welcomeMassageFun();

    int number = getNumberBetween1And10Fun();
    /* printf("\n%d\n\n", number); */

    printNumbersFun(number);

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Between 1 And 10 Program ( Version 2 ) ..\n\n");
}

// Get number Between 1 And 10 / function;
int getNumberBetween1And10Fun()
{
    int number = 0;
    do
    {
        printf("Please enter a number Between 1 And 10: ");
        scanf("%d", &number);

    } while (number > 10 || number < 1);

    return number;
}

// Print numbers / function;
int printNumbersFun(int number)
{
    for (int i = 1; i <= number; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    printf("\n\n");
}