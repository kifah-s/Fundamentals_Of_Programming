

//* Longest Word Program (Version 1).

/*
 * Write a program to find and print the longest word from the file "input.txt".
/*
! Input:
! This program reads a file and finds the largest word in it.

! Output:
! program
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void readFromFileFun(FILE *filePoi, char word[100], char longestWord[100]);

int main()
{
    // Declare Variables.
    FILE *filePointer;
    char word[100], longestWord[100];

    // Call Functions.
    readFromFileFun(filePointer, word, longestWord);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Longest Word Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    // Create File.
    filePoi = fopen("input.txt", "w");

    // Write in File.
    fprintf(filePoi, "This program reads a file and finds the largest word in it.");

    // Close File.
    fclose(filePoi);
}

// Read From File - Function.
void readFromFileFun(FILE *filePoi, char word[100], char longestWord[100])
{
    // Call Functions.
    welcomeMessageFun();
    createAndWriteInFileFun(filePoi);

    // Open File.
    filePoi = fopen("input.txt", "r");

    // Read From File.
    while (fscanf(filePoi, "%s", word) != EOF)
    {
        if (strlen(word) > strlen(longestWord))
        {
            strcpy(longestWord, word);
        }
    }

    printf("Longest word: %s\n\n", longestWord);

    // Close File.
    fclose(filePoi);
}

//* End Function ..
