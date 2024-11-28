

//* Average Grades Program (Version 1).

/*
 * Create a program to read and find the average of numbers stored in the file "grades.txt",
 * where each line contains a student's grade.
/*
! Input:
! 85
! 92
! 78
! 94

! Output:
! Average Grade: 87.25
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void readFromFileFun(FILE *filePoi, int num, float ave);

int main()
{
    // Declare Variables.
    FILE *filePointer;
    int number = 0;
    float average = 0;

    // Call Functions.
    readFromFileFun(filePointer, number, average);
    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Average Grades Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    // Create File.
    filePoi = fopen("grades.txt", "w");

    // Write in File.
    fprintf(filePoi, "85\n92\n78\n94\n");

    // Close File.
    fclose(filePoi);
}

// Read From File - Function.
void readFromFileFun(FILE *filePoi, int num, float ave)
{
    // Call Functions.
    welcomeMessageFun();
    createAndWriteInFileFun(filePoi);

    // Declare Variables.
    int cou = 0, sum = 0;

    // Open File.
    filePoi = fopen("grades.txt", "r");

    // Read From File.
    while (fscanf(filePoi, "%d", &num) != EOF)
    {
        sum = sum + num;
        cou++;
    }

    // Calculate Average.
    ave = (float)sum / cou;
    printf("Average Grade: %0.2f\n\n", ave);

    // Close File.
    fclose(filePoi);
}

//* End Function ..
