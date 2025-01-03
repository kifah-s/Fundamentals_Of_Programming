

//* Maximum And Minimum 7 Program (Version 1).

/*
* Write a program to find the maximum and minimum numbers from a file containing integers.

! Input:
! 1 2 3 4 5 6 7 8 9 10

! Output:
! Maximum Number: 10
! Minimum Number: 1
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(FILE *filePoi, int max, int min);

int main()
{
    // Declare Variables.
    FILE *filePointer;
    int maximumNumber = 0, minimumNumber = 1;

    // Call Functions.
    resultFun(filePointer, maximumNumber, minimumNumber);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Maximum And Minimum 7 Program (Version 1) ..\n\n");
}

// Create And Rite In File - Function.
void createAndRiteInFileFun(FILE *filePoi)
{
    // Create file.
    filePoi = fopen("number.txt", "w");

    // Write in file.
    fprintf(filePoi, "1 2 3 4 5 6 7 8 9 10");

    // Close file.
    fclose(filePoi);
}

// Find Maximum Number - Function.
int findMaximumNumberFun(FILE *filePoi, int max)
{
    // Open file.
    filePoi = fopen("number.txt", "r");

    // Find maximum number.
    int num = 0;
    while (fscanf(filePoi, "%d", &num) != EOF)
    {
        if (num > max)
        {
            max = num;
        }
    }

    // Close file.
    fclose(filePoi);

    return max;
}

// Find Minimum Number - Function.
int findMinimumNumberFun(FILE *filePoi, int min)
{
    // Open file.
    filePoi = fopen("number.txt", "r");

    // Find minimum number.
    int num = 0;
    while (fscanf(filePoi, "%d", &num) != EOF)
    {
        if (num < min)
        {
            min = num;
        }
    }

    // Close file.
    fclose(filePoi);

    return min;
}

// Result - Function.
void resultFun(FILE *filePoi, int max, int min)
{
    printWelcomeMessageFun();
    createAndRiteInFileFun(filePoi);
    max = findMaximumNumberFun(filePoi, max);
    min = findMinimumNumberFun(filePoi, min);

    printf("Maximum Number: %d\n", max);
    printf("Minimum Number: %d\n\n", min);
}
//* End Function ..
