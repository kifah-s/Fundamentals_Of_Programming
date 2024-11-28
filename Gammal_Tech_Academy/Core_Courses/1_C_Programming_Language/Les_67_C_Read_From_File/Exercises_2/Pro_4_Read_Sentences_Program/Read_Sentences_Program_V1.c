

//* Read Sentences Program (Version 1).

/*
 * Develop a program to read and print the first word from each line of the file "sentences.txt".
/*
! Input:
! The quick brown fox
! jumps over the lazy dog

! Output:
! The
! quick
! brown
! fox
! jumps
! over
! the
! lazy
! dog
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
    char myChar;

    // Call Functions.
    readFromFileFun(filePointer, myChar);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Read Sentences Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    // Create File.
    filePoi = fopen("sentences.txt", "w");

    // Write in File.
    fprintf(filePoi, "The quick brown fox\n");
    fprintf(filePoi, "jumps over the lazy dog\n");

    // Close File.
    fclose(filePoi);
}

// Read From File - Function.
void readFromFileFun(FILE *filePoi, char myCh)
{
    welcomeMessageFun();
    createAndWriteInFileFun(filePoi);

    // Open File.
    filePoi = fopen("sentences.txt", "r");

    // Read From File.
    while (fscanf(filePoi, "%c", &myCh) != EOF)
    {
        if (myCh == ' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c", myCh);
        }
    }
    printf("\n\n");

    // Close File.
    fclose(filePoi);
}

//* End Function ..
