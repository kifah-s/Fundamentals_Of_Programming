

/* >>> Found Or Not Found Program ( Version 3 ) <<< */

/* >>> A program that asks the user to enter a number and the program searches for that number in an array that contains a group of numbers. If the number is found, it prints found, and if it does not found it prints not found (in two different ways). <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int getNumberFun(int number);
void foundOrNotFoundNumberFun(int number, int arr[]);

int main()
{
    welcomeMassageFun();

    int number = getNumberFun(number);

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    foundOrNotFoundNumberFun(number, arr);

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Found Or Not Found Program ( Version 3 ) ..\n\n");
}

// Get number / function;
int getNumberFun(int number)
{
    printf("Please enter a number: ");
    scanf("%d", &number);

    return number;
}

// Found or not found number / function;
void foundOrNotFoundNumberFun(int number, int arr[])
{
    bool counter = false;
    for (int i = 0; i < 10; i++)
    {
        if (number == arr[i])
        {
            counter = true;
        }
    }
    if (counter == true)
    {
        printf("\nYes, i Found number \' %d \'\n\n", number);
    }
    else
    {
        printf("\nNo, i Not Found number\n\n");
    }
}