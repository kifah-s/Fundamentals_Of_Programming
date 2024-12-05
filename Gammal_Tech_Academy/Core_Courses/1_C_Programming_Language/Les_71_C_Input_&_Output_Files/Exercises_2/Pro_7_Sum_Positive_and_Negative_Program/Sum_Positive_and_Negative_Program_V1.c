

//* Sum Positive and Negative Program (Version 1).

/*
* Create a program that reads a series of integers from "input.txt",
* and writes the sum of positive integers and the sum of negative integers to separate files,
* "positive_sum.txt" and "negative_sum.txt."

! Input:
! 1 2 3 -5 -1

! Output:
! Sum of positive integers: 6
! Sum of negative integers: -6
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void ResultFun(FILE *inFi, int sumPos, FILE *posSumFi, int sumNeg, FILE *negSumFi);

int main()
{
    // Declare Variables.
    FILE *inputFile, *positiveSumFile, *negativeSumFile;
    int sumPositive = 0, sumNegative = 0;

    // Call Functions.
    ResultFun(inputFile, sumPositive, positiveSumFile, sumNegative, negativeSumFile);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum Positive and Negative Program (Version 1) ..\n\n");
}

// Create And Write In Input File - Function.
void createAndWriteInInputFileFun(FILE *inFi)
{
    // Create File.
    inFi = fopen("input.txt", "w");

    // Write In File.
    fprintf(inFi, "1 2 3 -5 -1");

    // Close File.
    fclose(inFi);
}

// Extract Sum Positive - Function.
int extractSumPositiveFun(FILE *inFi, int sumPos)
{
    // Open Input File.
    inFi = fopen("input.txt", "r");

    // Extract Sum Positive.
    int num = 0;
    while (fscanf(inFi, "%d", &num) != EOF)
    {
        if (num > 0)
        {
            sumPos = sumPos + num;
        }
    }

    // Close Input File.
    fclose(inFi);

    return sumPos;
}

// Create And Write In Positive Sum File - Function.
void createAndWriteInPositiveSumFileFun(FILE *posSumFi, int sumPos)
{
    // Create File.
    posSumFi = fopen("positive_sum.txt", "w");

    // Write In File.
    fprintf(posSumFi, "Sum of positive integers: %d", sumPos);

    // Close File.
    fclose(posSumFi);
}

// Extract Sum Negative - Function.
int extractSumNegativeFun(FILE *inFi, int sumNeg)
{
    // Open Input File.
    inFi = fopen("input.txt", "r");

    // Extract Sum Negative.
    int num = 0;
    while (fscanf(inFi, "%d", &num) != EOF)
    {
        if (num < 0)
        {
            sumNeg = sumNeg + num;
        }
    }

    // Close Input File.
    fclose(inFi);

    return sumNeg;
}

// Create And Write In Negative Sum File - Function.
void createAndWriteInNegativeSumFileFun(FILE *negSumFi, int sumNeg)
{
    // Create File.
    negSumFi = fopen("negative_sum.txt", "w");

    // Write In File.
    fprintf(negSumFi, "Sum of negative integers: %d", sumNeg);

    // Close File.
    fclose(negSumFi);
}

// Result - Function.
void ResultFun(FILE *inFi, int sumPos, FILE *posSumFi, int sumNeg, FILE *negSumFi)
{
    welcomeMessageFun();
    createAndWriteInInputFileFun(inFi);
    sumPos = extractSumPositiveFun(inFi, sumPos);
    createAndWriteInPositiveSumFileFun(posSumFi, sumPos);
    sumNeg = extractSumNegativeFun(inFi, sumNeg);
    createAndWriteInNegativeSumFileFun(negSumFi, sumNeg);
}

//* End Function ..
