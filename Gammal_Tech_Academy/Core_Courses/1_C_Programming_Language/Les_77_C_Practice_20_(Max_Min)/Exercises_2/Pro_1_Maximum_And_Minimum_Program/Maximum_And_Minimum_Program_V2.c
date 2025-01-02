

//* Maximum And Minimum Program (Version 2).

/*
* Write a program to find the maximum and minimum elements in an array.

! Output:
! Maximum Element: 8
! Minimum Element: 1
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int myNum[], int len, int max, int min);

int main()
{
    // Declare Variables.
    int myNumbers[] = {1, 2, 3, 4, 5, 6, 7, 8}, maximumNumber = myNumbers[0], minimumNumber = myNumbers[0];
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);

    // Call Functions.
    resultFun(myNumbers, length, maximumNumber, minimumNumber);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Maximum And Minimum Program (Version 2) ..\n\n");
}

// Find Maximum Number - Function.
int findMaximumNumberFun(int myNum[], int len, int max)
{
    for (int i = 0; i < len; i++)
    {
        if (myNum[i] > max)
        {
            max = myNum[i];
        }
    }

    return max;
}

// Find Minimum Number - Function.
int findMinimumNumberFun(int myNum[], int len, int min)
{
    for (int i = 0; i < len; i++)
    {
        if (myNum[i] < min)
        {
            min = myNum[i];
        }
    }

    return min;
}

// Result - Function.
void resultFun(int myNum[], int len, int max, int min)
{
    printWelcomeMessageFun();
    max = findMaximumNumberFun(myNum, len, max);
    min = findMinimumNumberFun(myNum, len, min);

    printf("Maximum Element: %d\n", max);
    printf("Minimum Element: %d\n\n", min);
}
//* End Function ..
