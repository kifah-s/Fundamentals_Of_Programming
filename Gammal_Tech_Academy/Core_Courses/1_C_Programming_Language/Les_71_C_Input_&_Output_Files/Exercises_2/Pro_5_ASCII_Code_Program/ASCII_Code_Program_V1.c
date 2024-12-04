

//* ASCII Code Program (Version 1).

/*
* Create a program that takes a character as input and writes its ASCII code to a file named "ascii.txt."

! Input:
! Please enter a Character: C

! Output:
! ASCII Code of C: 67
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void ResultFun(char myCh, FILE *f);

int main()
{
    // Declare Variables.
    FILE *file;
    char myChar;

    // Call Functions.
    ResultFun(myChar, file);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in ASCII Code Program (Version 1) ..\n\n");
}

// Receive Character - Function.
char receiveCharacterFun(char myCh)
{
    printf("Please enter a Character: ");
    scanf("%c", &myCh);

    return myCh;
}

// Create And Write In File - Function.
void createAndWriteInFileFun(FILE *f, char myCh)
{
    // Create File.
    f = fopen("ascii.txt", "w");

    // Write In File.
    fprintf(f, "ASCII Code of C: %d", myCh);

    // Close File.
    fclose(f);
}

// Result - Function.
void ResultFun(char myCh, FILE *f)
{
    welcomeMessageFun();
    myCh = receiveCharacterFun(myCh);
    createAndWriteInFileFun(f, myCh);
}

//* End Function ..
