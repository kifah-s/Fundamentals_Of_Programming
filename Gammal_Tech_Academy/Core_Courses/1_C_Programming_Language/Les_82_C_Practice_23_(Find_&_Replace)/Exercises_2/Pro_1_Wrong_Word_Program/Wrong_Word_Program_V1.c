

//* Wrong Word Program (Version 1).

/*
* Write a program that reads a text file named "gammal.txt",
* and finds a specified incorrect word, then replaces it with a correct word,
* the corrected text should be written to a new file named "gammal2.txt.",
* the user should input the incorrect and correct words.

! Input:
! The correct tixt should be written to a new file named "file_2.txt", the user should input the incorrect and correct words.

! please enter the wrong word: tixt
! please enter the correct word: text

! Output:
! The correct text should be written to a new file named "file_2.txt", the user should input the incorrect and correct words.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

void resultFun(FILE *poiFile_1, FILE *poiFile_2, char wroWord[], char corWord[]);

int main()
{
    // Declare Variables.
    FILE *pointerFile_1, *pointerFile_2;
    char wrongWord[25], correctWord[25];

    // Call Functions.
    resultFun(pointerFile_1, pointerFile_2, wrongWord, correctWord);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Wrong Word Program (Version 1) ..\n\n");
}

// Create And Write In File 1 - Function.
void createAndWriteInFile1Fun(FILE *poiFile_1)
{
    poiFile_1 = fopen("file_1.txt", "w");
    fprintf(poiFile_1, "The correct tixt should be written to a new file named \"file_2.txt\", the user should input the incorrect and correct words.");
    fclose(poiFile_1);
}

// Get Wrong Word - Function.
void getWrongWordFun(char wroWord[])
{
    printf("Please enter Wrong word: ");
    scanf("%s", wroWord);
}

// Get Correct Word - Function.
void getCorrectWordFun(char corWord[])
{
    printf("Please enter Correct word: ");
    scanf("%s", corWord);
}

// Replace Wrong Word - Function.
void replaceWrongWordFun(FILE *poiFile_1, FILE *poiFile_2, char wroWord[], char corWord[])
{
    char w[25];
    poiFile_1 = fopen("file_1.txt", "r");
    poiFile_2 = fopen("file_2.txt", "w");
    while (fscanf(poiFile_1, "%s", w) != EOF)
    {
        if (strcmp(w, wroWord) == 0)
        {
            fprintf(poiFile_2, "%s ", corWord);
        }
        else
        {
            fprintf(poiFile_2, "%s ", w);
        }
    }

    fclose(poiFile_1);
    fclose(poiFile_2);
}

// Result - Function.
void resultFun(FILE *poiFile_1, FILE *poiFile_2, char wroWord[], char corWord[])
{
    printWelcomeMessageFun();
    createAndWriteInFile1Fun(poiFile_1);
    getWrongWordFun(wroWord);
    getCorrectWordFun(corWord);
    replaceWrongWordFun(poiFile_1, poiFile_2, wroWord, corWord);
}
//* End Function ..
