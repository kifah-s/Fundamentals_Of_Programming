

//* Specific Word Program (Version 1).

/*
* Write a program to read a paragraph until a specific word and print it.

! Input:
! Please Enter a paragraph (stop at Specific Word): kifah saloum 0

! Output:
! Paragraph: kifah saloum
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void printParagraphFun(char para[100]);

int main()
{
    // Declare Variables.
    char paragraph[100];

    // Call Functions.
    printParagraphFun(paragraph);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Specific Word Program (Version 1) ..\n\n");
}

// Read Paragraph - Function.
void readParagraphFun(char para[100])
{
    printf("Please Enter a paragraph (stop at Specific Word): ");
    scanf("%[^0]", para);
}

// Print Paragraph - Function.
void printParagraphFun(char para[100])
{
    welcomeMessageFun();
    readParagraphFun(para);

    printf("\nParagraph %s\n\n", para);
}
//* End Function ..
