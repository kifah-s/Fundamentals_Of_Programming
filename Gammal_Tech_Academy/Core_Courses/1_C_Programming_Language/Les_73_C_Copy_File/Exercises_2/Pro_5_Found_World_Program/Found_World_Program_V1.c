

//* Found World Program (Version 1).

/*
* Write a program that checks if a specific word exists in a file,
* If the word is found, print a message; otherwise, print another message.

! Input:
! Please enter the world to search: world

! Output:
! World found in file.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(FILE *filePoi, char w[50]);

int main()
{
    // Declare Variables.
    FILE *filePointer;
    char word[50];

    // Call Functions.
    resultFun(filePointer, word);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Found World Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    // Create File.
    filePoi = fopen("file.txt", "w");

    // Write In File.
    fprintf(filePoi, "Hello World");

    // Close File.
    fclose(filePoi);
}

// Get Word - Function.
void getWordFun(char w[50])
{
    printf("Please enter the world to search: ");
    scanf("%s", w);
}

// Search For Word - Function.
bool searchForWordFun(FILE *filePoi, char w[50])
{
    // Open File.
    filePoi = fopen("file.txt", "r");

    // Declare Variable.
    char wordsInFile[50];
    bool found = false;

    while (fscanf(filePoi, "%s", wordsInFile) != EOF)
    {
        if (strcmp(wordsInFile, w) == 0)
        {
            found = true;
        }
    }

    // Close Files.
    fclose(filePoi);

    return found;
}

// Result - Function.
void resultFun(FILE *filePoi, char w[50])
{
    printWelcomeMessageFun();
    createAndWriteInFileFun(filePoi);
    getWordFun(w);
    if (searchForWordFun(filePoi, w))
    {
        printf("%s found in file.\n\n", w);
    }
    else
    {
        printf("%s Not found in file.\n\n", w);
    }
}
//* End Function ..
