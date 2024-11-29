

//* Sum And Product Program (Version 1).

/*
 * Create a program to read integers from the file "data.txt",
 * and print the sum of positive integers and the product of negative integers.
/*
! Input:
! 1
! -2
! -3
! 2
! -4

! Output:
! Sum of positive: 3
! Product of negative: -24
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void readFromFileFun(FILE *filePoi, int num, int sumPos, int proNeg);

int main()
{
    // Declare Variables.
    FILE *filePointer;
    int number = 0, sumPositive = 0, productNegative = 1;

    // Call Functions.
    readFromFileFun(filePointer, number, sumPositive, productNegative);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum And Product Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    // Create File.
    filePoi = fopen("data.txt", "w");

    // Write in File.
    fprintf(filePoi, "1\n-2\n-3\n2\n-4\n");

    // Close File.
    fclose(filePoi);
}

// Read From File - Function.
void readFromFileFun(FILE *filePoi, int num, int sumPos, int proNeg)
{
    // Call Functions.
    welcomeMessageFun();
    createAndWriteInFileFun(filePoi);

    // Open File.
    filePoi = fopen("data.txt", "r");

    // Read From File.
    while (fscanf(filePoi, "%d", &num) != EOF)
    {
        if (num > 0)
        {
            sumPos = sumPos + num;
        }
        else if (num < 0)
        {
            proNeg = proNeg * num;
        }
    }

    printf("Sum of positive: %d\n", sumPos);
    printf("Product of negative: %d\n\n", proNeg);

    // Close File.
    fclose(filePoi);
}

//* End Function ..
