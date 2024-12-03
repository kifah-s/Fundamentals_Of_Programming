

//* ASCII Values Program (Version 1).

/*
* Write a program to read a line and print the ASCII values of each character.

! Input:
! Please Enter a line: read a line

! Output:
! ASCII Values: 114 101 97 100 32 97 32 108 105 110 101
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void printASCIIValuesFun(char li[100]);

int main()
{
    // Declare Variables.
    char line[100];

    // Call Functions.
    printASCIIValuesFun(line);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in ASCII Values Program (Version 1) ..\n\n");
}

// Read Line - Function.
void readLineFun(char li[100])
{
    printf("Please Enter a Line: ");
    scanf("%[^\n]", li);
}

// Print ASCII Values - Function.
void printASCIIValuesFun(char li[100])
{
    welcomeMessageFun();
    readLineFun(li);

    printf("\nASCII Values: ");
    for (int i = 0; i < strlen(li) - 1; i++)
    {
        printf("%d ", li[i]);
    }
    printf("\n\n");
}
//* End Function ..
