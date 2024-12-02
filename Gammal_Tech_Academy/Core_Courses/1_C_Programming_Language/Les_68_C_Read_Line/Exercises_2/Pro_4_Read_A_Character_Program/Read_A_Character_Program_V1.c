

//* Read A Character Program (Version 1).

/*
* Write a program to read a character from the file "char_data.txt" and print it.

! Input:
! A

! Output:
! Character: A
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void readFromFileFun(FILE *filePoi, char myCh);

int main()
{
    // Declare Variables.
    FILE *filePointer;
    char myCharacter;

    // Call Functions.
    readFromFileFun(filePointer, myCharacter);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Read A Character Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    // Create File.
    filePoi = fopen("char_data.txt", "w");

    // Write in File.
    fprintf(filePoi, "A");

    // Close File.
    fclose(filePoi);
}

// Read From File - Function.
void readFromFileFun(FILE *filePoi, char myCh)
{
    // Call Functions.
    welcomeMessageFun();
    createAndWriteInFileFun(filePoi);

    // Open File.
    filePoi = fopen("char_data.txt", "r");

    // Read From File.
    fscanf(filePoi, "%c", &myCh);

    printf("Character: %c\n\n", myCh);

    // Close File.
    fclose(filePoi);
}

//* End Function ..
