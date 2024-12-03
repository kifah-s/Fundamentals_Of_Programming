

//* Replace all Spaces Program (Version 1).

/*
* Write a program to read a line and replace all spaces with underscores.

! Input:
! Please Enter a line: Thes program reads a line

! Output:
! Modified Line: Thes_program_reads_a_line
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void printModifiedLineFun(char li[100], char modLet);

int main()
{
    // Declare Variables.
    char line[100], modificationLetter = '_';

    // Call Functions.
    printModifiedLineFun(line, modificationLetter);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Replace all Spaces Program (Version 1) ..\n\n");
}

// Read Line - Function.
void readLineFun(char li[100])
{
    printf("Please Enter a Line: ");
    scanf("%[^\n]", li);
}

// Replace all Spaces - Function.
void replaceAllSpacesFun(char li[100], char modLet)
{
    for (int i = 0; i < strlen(li); i++) // OR: li[i] != '\0';
    {
        if (li[i] == ' ')
        {
            li[i] = modLet;
        }
    }
}

// Print Modified Line - Function.
void printModifiedLineFun(char li[100], char modLet)
{
    welcomeMessageFun();
    readLineFun(li);
    replaceAllSpacesFun(li, modLet);

    printf("\nModified Line: %s\n\n", li);
}
//* End Function ..
