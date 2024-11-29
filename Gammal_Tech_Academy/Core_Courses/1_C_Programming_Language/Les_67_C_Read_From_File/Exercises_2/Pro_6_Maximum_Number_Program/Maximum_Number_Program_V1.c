

//* Maximum Number Program (Version 1).

/*
 * Create a program to find and print the maximum number from the file "numbers.txt",
 * where each line contains an integer.
/*
! Input:
! 48
! 32
! 75
! 91

! Output:
! Maximum Number: 91
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void readFromFileFun(FILE *filePoi, int num, int max);

int main()
{
    // Declare Variables.
    FILE *filePointer;
    int number = 0, maximumNumber = 0;

    // Call Functions.
    readFromFileFun(filePointer,  number,  maximumNumber);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Maximum Number Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    // Create File.
    filePoi = fopen("numbers.txt", "w");

    // Write in File.
    fprintf(filePoi, "48\n32\n75\n91\n");

    // Close File.
    fclose(filePoi);
}

// Read From File - Function.
void readFromFileFun(FILE *filePoi, int num, int max)
{
    // Call Functions.
    welcomeMessageFun();
    createAndWriteInFileFun(filePoi);

    // Open File.
    filePoi = fopen("numbers.txt", "r");

    // Read From File.
    while (fscanf(filePoi, "%d", &num) != EOF)
    {
        if (num > max)
        {
            max = num;
        }
    }

    printf("Maximum Number: %d\n\n", max);

    // Close File.
    fclose(filePoi);
}

//* End Function ..
