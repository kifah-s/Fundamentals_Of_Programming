

//* Name Lengths Program (Version 1).

/*
* Create a program that reads a series of names from "names.txt",
* and writes each name along with its length to "name_lengths.txt."

! Input:
! Ahmed
! Amr
! Aly

! Output:
! Ahmed: 5
! Amr: 3
! Aly: 3
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void ResultFun(FILE *naFi, FILE *naLeFi);

int main()
{
    // Declare Variables.
    FILE *namesFile, *namesLengthsFile;

    // Call Functions.
    ResultFun(namesFile, namesLengthsFile);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Name Lengths Program (Version 1) ..\n\n");
}

// Create And Write In names File - Function.
void createAndWriteInNamesFileFun(FILE *naFi)
{
    // Create File.
    naFi = fopen("names.txt", "w");

    // Write In File.
    fprintf(naFi, "Ahmad\n");
    fprintf(naFi, "Amr\n");
    fprintf(naFi, "Aly\n");

    // Close File.
    fclose(naFi);
}

// Copy And Cout Names - Function.
void copyAndCoutNamesFun(FILE *naFi, FILE *naLeFi)
{
    // Open Files.
    naFi = fopen("names.txt", "r");
    naLeFi = fopen("name_lengths.txt", "w");

    // Copy and Count Names.
    char myName[50];
    while (fscanf(naFi, "%s", myName) != EOF)
    {
        fprintf(naLeFi, "%s: %d\n", myName, strlen(myName));
    }

    // Close Files.
    fclose(naFi);
    fclose(naLeFi);
}

// Result - Function.
void ResultFun(FILE *naFi, FILE *naLeFi)
{
    welcomeMessageFun();
    createAndWriteInNamesFileFun(naFi);
    copyAndCoutNamesFun(naFi, naLeFi);
}

//* End Function ..
