

//* Reverse Order Program (Version 1).

/*
* Write a program that reads a file with a list of names and prints them in reverse order.

! Input:
! Alice Bob Charlie David Eve

! Output:
! Names in revers order:
! Eve
! David
! Charlie
! Bob
! Alice
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(FILE *filePoi, char myArr[25][25]);

int main()
{
    // Declare Variables.
    FILE *filePointer;
    char myArray[25][25];

    // Call Functions.
    resultFun(filePointer, myArray);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Reverse Order Program (Version 1) ..\n\n");
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *filePoi)
{
    // Create File.
    filePoi = fopen("names.txt", "w");

    // Write In File.
    fprintf(filePoi, "Alice Bob Charlie David Eve");

    // Close File.
    fclose(filePoi);
}

// Read From File - Function.
void readFromFileFun(FILE *filePoi, char myArr[25][25])
{
    // Open File.
    filePoi = fopen("names.txt", "r");

    // Declare Variable.
    char name[25];
    int cou = 0;

    // Read Names.
    while (fscanf(filePoi, "%s", name) != EOF)
    {
        strcpy(myArr[cou], name);
        cou++;
    }

    // Close Files.
    fclose(filePoi);
}

// Print Revers Order - Function.
void printReversOrderFun(char myArr[25][25])
{
    printf("Names in revers order:");
    for (int i = strlen(myArr[25]); i >= 0; i--)
    {
        printf("%s\n", myArr[i]);
    }
}

// Result - Function.
void resultFun(FILE *filePoi, char myArr[25][25])
{
    printWelcomeMessageFun();
    createAndWriteInFileFun(filePoi);
    readFromFileFun(filePoi, myArr);
    printReversOrderFun(myArr);

    printf("\n\n");
}
//* End Function ..
