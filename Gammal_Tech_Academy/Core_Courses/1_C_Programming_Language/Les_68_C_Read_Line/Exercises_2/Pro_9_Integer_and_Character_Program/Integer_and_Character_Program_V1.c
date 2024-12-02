

//* Integer and Character Program (Version 1).

/*
* Write a program to read an integer and a character from the file "int_char_input.txt" and print them.

! Input:
! 50 A

! Output:
! Integer: 50
! character: A
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void readFromFileFun(FILE *filePoi, int myNum, char myCh);

int main()
{
    // Declare Variables.
    FILE *filePointer;
    int myNumber;
    char myCharacter;

    // Call Functions.
    readFromFileFun(filePointer,  myNumber, myCharacter);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Integer and Character Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    // Create File.
    filePoi = fopen("int_char_input.txt", "w");

    // Write in File.
    fprintf(filePoi, "50 A");

    // Close File.
    fclose(filePoi);
}

// Read From File - Function.
void readFromFileFun(FILE *filePoi, int myNum, char myCh)
{
    // Call Functions.
    welcomeMessageFun();
    createAndWriteInFileFun(filePoi);

    // Open File.
    filePoi = fopen("int_char_input.txt", "r");

    // Read From File.
    fscanf(filePoi, "%d %c", &myNum, &myCh);

    printf("Integer: %d\n", myNum);
    printf("Character: %c\n\n", myCh);

    // Close File.
    fclose(filePoi);
}
//* End Function ..
