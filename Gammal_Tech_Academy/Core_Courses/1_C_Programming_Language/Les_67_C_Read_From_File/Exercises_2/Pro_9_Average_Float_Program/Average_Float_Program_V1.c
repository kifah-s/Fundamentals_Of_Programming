

//* Average Float Program (Version 1).

/*
 * Create a program to read a series of floating-point numbers from "floatdata.txt" and calculate their average.
/*
! Input:
! 1.6
! 1.5
! 6.6

! Output:
! Average: 3.23
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void readFromFileFun(FILE *filePoi, float num, float ave);

int main()
{
    // Declare Variables.
    FILE *filePointer;
    float number = 0, average = 0;

    // Call Functions.
    readFromFileFun(filePointer, number, average);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Average Float Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    // Create File.
    filePoi = fopen("floatdata.txt", "w");

    // Write in File.
    fprintf(filePoi, "1.6\n1.5\n6.6\n");

    // Close File.
    fclose(filePoi);
}

// Read From File - Function.
void readFromFileFun(FILE *filePoi, float num, float ave)
{
    // Call Functions.
    welcomeMessageFun();
    createAndWriteInFileFun(filePoi);

    // Declare Variables.
    float cou = 0, sum = 0;

    // Open File.
    filePoi = fopen("floatdata.txt", "r");

    // Read From File.
    while (fscanf(filePoi, "%f", &num) != EOF)
    {
        sum = sum + num;
        cou++;
    }

    // Calculate Average.
    ave = sum / cou;
    printf("Average Grade: %0.2f\n\n", ave);

    // Close File.
    fclose(filePoi);
}

//* End Function ..
