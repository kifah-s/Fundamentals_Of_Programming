

//* Count Characters Program (Version 1).

/*
 * Create a program to read and count the number of characters in the file "message.txt" and print the count.
/*
! Input:
! Hello World

! Output:
! Number of characters: 13
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void readFromFileFun(FILE *filePoi, char myCh, int cou);

int main()
{
    // Declare Variables.
    FILE *filePointer;
    char myChar;
    int counter = 0;

    // Call Functions.
    readFromFileFun(filePointer, myChar, counter);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Count Characters Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    // Create File.
    filePoi = fopen("output.txt", "w");

    // Write in File.
    fprintf(filePoi, "Hello World\n");

    // Close File.
    fclose(filePoi);
}

// Read From File - Function.
void readFromFileFun(FILE *filePoi, char myCh, int cou)
{
    welcomeMessageFun();
    createAndWriteInFileFun(filePoi);

    // Open File.
    filePoi = fopen("output.txt", "r");

    // Read From File.
    while (fscanf(filePoi, "%c", &myCh) != EOF)
    {
        // printf("%c", myCh);
        cou++;
    }

    printf("Number of characters: %d\n\n", cou);

    // Close File.
    fclose(filePoi);
}

//* End Function ..
