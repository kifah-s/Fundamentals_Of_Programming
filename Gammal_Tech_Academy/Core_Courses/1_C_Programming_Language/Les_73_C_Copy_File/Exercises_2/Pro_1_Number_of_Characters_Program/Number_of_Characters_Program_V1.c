

//* Number of Characters Program (Version 1).

/*
* Write a program that counts the number of characters in a file,
* excluding spaces and newline characters.
* Create a file, write a sentence inside it, and then count the characters.

! Input:
! This is a simple sentence.

! Output:
! Count: 22
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(FILE *filePoi, char ch, int cou);

int main()
{
    // Declare Variables.
    FILE *filePointer;
    char ch;
    int counter = 0;

    // Call Functions.
    resultFun(filePointer, ch, counter);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Number of Characters Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    // Create File.
    filePoi = fopen("file.txt", "w");

    // Write In File.
    fprintf(filePoi, "This is a simple sentence.");

    // Close File.
    fclose(filePoi);
}

// Count Characters In File - Function.
int countCharactersInFileFun(FILE *filePoi, char ch, int cou)
{
    // Open File.
    filePoi = fopen("file.txt", "r");

    // Count Characters.
    while (fscanf(filePoi, "%c", &ch) != EOF)
    {
        if (ch != ' ' && ch != '\n')
        {
            cou++;
        }
    }

    fclose(filePoi);

    return cou;
}

// Result - Function.
void resultFun(FILE *filePoi, char ch, int cou)
{
    printWelcomeMessageFun();
    createAndWriteInFileFun(filePoi);
    cou = countCharactersInFileFun(filePoi, ch, cou);

    printf("Count: %d\n\n", cou);
}
//* End Function ..
