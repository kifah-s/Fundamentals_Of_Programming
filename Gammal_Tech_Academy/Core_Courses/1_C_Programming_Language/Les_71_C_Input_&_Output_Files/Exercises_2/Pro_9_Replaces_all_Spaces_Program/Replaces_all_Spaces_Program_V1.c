

//* Replaces all Spaces Program (Version 1).

/*
* Create a program that reads a sentence from "sentence.txt",
* and replaces all spaces with underscores.
* Write the modified sentence to "modified_sentence.txt."

! Input:
! replace all spaces with underscores.

! Output:
! replace_all_spaces_with_underscores.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void ResultFun(FILE *naFi, FILE *modSenFi);

int main()
{
    // Declare Variables.
    FILE *sentenceFile, *modifiedSentenceFile;

    // Call Functions.
    ResultFun(sentenceFile, modifiedSentenceFile);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Replaces all Spaces Program (Version 1) ..\n\n");
}

// Create And Write In Sentence File - Function.
void createAndWriteInSentenceFileFun(FILE *senFi)
{
    // Create File.
    senFi = fopen("sentence.txt", "w");

    // Write In File.
    fprintf(senFi, "replace all spaces with underscores.\n");

    // Close File.
    fclose(senFi);
}

// Create File And Replace All Space - Function.
void createFileAndReplaceAllSpaceFun(FILE *senFi, FILE *modSenFi)
{
    // Open Files.
    senFi = fopen("sentence.txt", "r");
    modSenFi = fopen("modified_sentence.txt", "w");

    // Replace All Spaces.
    char ch;
    while (fscanf(senFi, "%c", &ch) != EOF)
    {
        if (ch == ' ')
        {
            ch = '_';
        }

        fprintf(modSenFi, "%c", ch);
    }

    // Close Files.
    fclose(senFi);
    fclose(modSenFi);
}

// Result - Function.
void ResultFun(FILE *senFi, FILE *modSenFi)
{
    welcomeMessageFun();
    createAndWriteInSentenceFileFun(senFi);
    createFileAndReplaceAllSpaceFun(senFi, modSenFi);
}

//* End Function ..
