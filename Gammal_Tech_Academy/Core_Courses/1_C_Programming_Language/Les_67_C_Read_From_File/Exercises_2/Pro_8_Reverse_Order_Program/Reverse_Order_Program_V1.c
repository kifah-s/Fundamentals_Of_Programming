

//* Reverse Order Program (Version 1).

/*
 * Develop a program to read a list of names from the file "names.txt" and print them in reverse order.
/*
! Input:
! Gammal
! Tech

! Output:
! Names in reverse order:
! Tech
! Gammal
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void readFromFileFun(FILE *filePoi, int cou, char myArr[50][100]);

int main()
{
    // Declare Variables.
    FILE *filePointer;
    char myArray[50][100];
    int count = 0;

    // Call Functions.
    readFromFileFun(filePointer, count, myArray);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Reverse Order Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    // Create File.
    filePoi = fopen("names.txt", "w");

    // Write in File.
    fprintf(filePoi, "Gammal\nTech");

    // Close File.
    fclose(filePoi);
}

// Read From File - Function.
void readFromFileFun(FILE *filePoi, int cou, char myArr[50][100])
{
    // Call Functions.
    welcomeMessageFun();
    createAndWriteInFileFun(filePoi);

    // Open File.
    filePoi = fopen("names.txt", "r");

    // Read From File.
    while (fscanf(filePoi, "%s", myArr[cou]) != EOF)
    {
        cou++;
    }

    for (int i = cou - 1; i >= 0; i--)
    {
        printf("%s\n", myArr[i]);
    }

    printf("\n\n");

    // Close File.
    fclose(filePoi);
}

//* End Function ..
