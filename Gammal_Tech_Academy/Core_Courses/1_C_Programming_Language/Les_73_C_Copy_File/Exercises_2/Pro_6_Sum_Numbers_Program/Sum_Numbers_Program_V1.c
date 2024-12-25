

//* Sum Numbers Program (Version 1).

/*
* Create a program that reads a series of numbers from a file and prints their sum.

! Input:
! 10 20 30 40 50

! Output:
! Sum of numbers: 150
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(FILE *filePoi, int sumNum);

int main()
{
    // Declare Variables.
    FILE *filePointer;
    int sumNumbers = 0;

    // Call Functions.
    resultFun(filePointer, sumNumbers);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Sum Numbers Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    // Create File.
    filePoi = fopen("numbers.txt", "w");

    // Write In File.
    fprintf(filePoi, "10 20 30 40 50");

    // Close File.
    fclose(filePoi);
}

// Sum Numbers - Function.
int sumNumbersFun(FILE *filePoi, int sumNum)
{
    // Open File.
    filePoi = fopen("numbers.txt", "r");

    // Declare Variable.
    int num;

    // Sum Numbers.
    while (fscanf(filePoi, "%d", &num) != EOF)
    {
        sumNum = sumNum + num;
    }

    // Close Files.
    fclose(filePoi);

    return sumNum;
}

// Result - Function.
void resultFun(FILE *filePoi, int sumNum)
{
    printWelcomeMessageFun();
    createAndWriteInFileFun(filePoi);
    sumNum = sumNumbersFun(filePoi, sumNum);

    printf("Sum of numbers: %d\n\n", sumNum);
    
}
//* End Function ..
