

//* Calculates Average Program (Version 1).

/*
* Create a program that reads a file with a series of grades and calculates the average.

! Input:
! 85 92 78 95 88

! Output:
! Average grades: 87.60
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(FILE *filePoi, float ave);

int main()
{
    // Declare Variables.
    FILE *filePointer;
    float average = 0;

    // Call Functions.
    resultFun(filePointer, average);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Calculates Average Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    // Create File.
    filePoi = fopen("grades.txt", "w");

    // Write In File.
    fprintf(filePoi, "85 92 78 95 88");

    // Close File.
    fclose(filePoi);
}

// Calculate Average - Function.
float calculateAverageFun(FILE *filePoi, float ave)
{
    // Open File.
    filePoi = fopen("grades.txt", "r");

    // Declare Variable.
    float gra = 0, sum = 0, cou = 0;

    // Calculate Average.
    while (fscanf(filePoi, "%f", &gra) != EOF)
    {
        sum = sum + gra;
        cou++;
    }

    ave = sum / cou;

    // Close Files.
    fclose(filePoi);

    return ave;
}

// Result - Function.
void resultFun(FILE *filePoi, float ave)
{
    printWelcomeMessageFun();
    createAndWriteInFileFun(filePoi);
    ave = calculateAverageFun(filePoi, ave);

    printf("Average grades: %0.2f\n\n", ave);
}
//* End Function ..
