

//* Counts Characters Program (Version 1).

/*
* Write a program that opens a text file named "characters.txt" and counts the number of characters present in it.

! Input:
! Write a program that opens a text file named "characters.txt" and counts the number of characters present in it.

! Output:
! Number Of Characters in the file: 90
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

void resultFun(FILE *poiFile, int charCou);

int main()
{
    // Declare Variables.
    FILE *pointerFile;
    int characterCounter = 0;

    // Call Functions.
    resultFun(pointerFile, characterCounter);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Counts Characters Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *poiFile)
{
    poiFile = fopen("sample.txt", "w");
    fprintf(poiFile, "Write a program that opens a text file named \"characters.txt\" and counts the number of characters present in it.");
    fclose(poiFile);
}

// Count Characters - Function.
int countCharactersFun(FILE *poiFile, int charCou)
{
    char w;
    poiFile = fopen("sample.txt", "r");
    while (fscanf(poiFile, "%c", &w) != EOF)
    {
        // charCou++;

        // if (w == ' ' || w == '"' || w == '.')
        // {
        //     continue;
        // }
        // else
        // {
        //     charCou++;
        // }

        if (w >= 'A' && w <= 'Z' || w >= 'a' && w <= 'z')
        {
            charCou++;
        }
    }
    fclose(poiFile);

    return charCou;
}

// Result - Function.
void resultFun(FILE *poiFile, int charCou)
{
    printWelcomeMessageFun();
    createAndWriteInFileFun(poiFile);
    charCou = countCharactersFun(poiFile, charCou);
    printf("Number Of Characters in the file: %d\n\n", charCou);
}
//* End Function ..
