

//* Read Numbers Program (Version 1).

/*
 * Develop a program to read and display the contents of the file "numbers.txt",
 * which contains numbers separated by spaces.
/*
! Input:
! 25 10 7 15 30

! Output:
! 25 10 7 15 30
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void readFromFileFun(FILE *filePoi, int num);

int main()
{
    // Declare Variables.
    FILE *filePointer;
    int myNumber;

    // Call Functions.
    readFromFileFun(filePointer, myNumber);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Read Numbers Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    // Create File.
    filePoi = fopen("numbers.txt", "w");

    // Write in File.
    fprintf(filePoi, "25 10 7 15 30\n");

    // Close File.
    fclose(filePoi);
}

// Read From File - Function.
void readFromFileFun(FILE *filePoi, int num)
{
    welcomeMessageFun();
    createAndWriteInFileFun(filePoi);

    // Open File.
    filePoi = fopen("numbers.txt", "r");

    // Read From File.
    while (fscanf(filePoi, "%d", &num) != EOF)
    {
        printf("%d ", num);
    }

    printf("\n\n");

    // Close File.
    fclose(filePoi);
}

//* End Function ..
