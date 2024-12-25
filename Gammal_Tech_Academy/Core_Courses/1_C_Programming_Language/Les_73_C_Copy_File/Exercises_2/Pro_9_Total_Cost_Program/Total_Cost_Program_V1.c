

//* Total Cost Program (Version 1).

/*
* Write a program that reads a file containing prices of items and calculates the total cost.

! Input:
! 15.50 20.75 8.99 12.45 30.25

! Output:
! Total Cost: 87.94
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(FILE *filePoi, float tot);

int main()
{
    // Declare Variables.
    FILE *filePointer;
    float totalCost = 0;

    // Call Functions.
    resultFun(filePointer, totalCost);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Total Cost Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    // Create File.
    filePoi = fopen("prices.txt", "w");

    // Write In File.
    fprintf(filePoi, "15.50 20.75 8.99 12.45 30.25");

    // Close File.
    fclose(filePoi);
}

// Calculate Total Cost - Function.
float calculateTotalCostFun(FILE *filePoi, float tot)
{
    // Open File.
    filePoi = fopen("prices.txt", "r");

    // Declare Variable.
    float num;

    // Calculate Total.
    while (fscanf(filePoi, "%f", &num) != EOF)
    {
        tot = tot + num;
    }

    // Close Files.
    fclose(filePoi);

    return tot;
}

// Result - Function.
void resultFun(FILE *filePoi, float tot)
{
    printWelcomeMessageFun();
    createAndWriteInFileFun(filePoi);
    tot = calculateTotalCostFun(filePoi, tot);

    printf("Total Cost: %0.2f\n\n", tot);
    
}
//* End Function ..
