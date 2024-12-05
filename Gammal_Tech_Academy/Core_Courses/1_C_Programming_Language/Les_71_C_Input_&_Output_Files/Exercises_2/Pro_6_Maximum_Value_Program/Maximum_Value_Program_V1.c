

//* Maximum Value Program (Version 1).

/*
* Create a program that reads a series of integers from "data.txt" and finds the maximum value among them.

! Input:
! -9 1

! Output:
! Maximum Value: 1
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void ResultFun(FILE *f, int max);

int main()
{
    // Declare Variables.
    FILE *file;
    int maximumValue = 0;

    // Call Functions.
    ResultFun(file, maximumValue);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Maximum Value Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *f)
{
    // Create File.
    f = fopen("data.txt", "w");

    // Write In File.
    fprintf(f, "-9 1");

    // Close File.
    fclose(f);
}

// Extract Maximum Value - Function.
int extractMaximumValueFun(FILE *f)
{
    // Open File.
    f = fopen("data.txt", "r");

    // Extract Maximum Value.
    int num1, num2;
    fscanf(f, "%d %d", &num1, &num2);
    fclose(f);

    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

// Result - Function.
void ResultFun(FILE *f, int max)
{
    welcomeMessageFun();
    createAndWriteInFileFun(f);
    max = extractMaximumValueFun(f);

    printf("\nMaximum Value: %d\n\n", max);
}

//* End Function ..
