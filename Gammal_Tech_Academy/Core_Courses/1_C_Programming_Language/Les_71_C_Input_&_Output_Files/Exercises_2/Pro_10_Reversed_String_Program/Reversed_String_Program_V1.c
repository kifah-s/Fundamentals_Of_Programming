

//* Reversed String Program (Version 1).

/*
* Write a program that takes a string as input and writes it backward to a file named "reversed_string.txt."

! Input:
! Please enter a string: kifah saloum

! Output:
! muolas hafik
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void ResultFun(char myStr[100], FILE *revStrFil);

int main()
{
    // Declare Variables.
    FILE *reversedStringFile;
    char myString[100];

    // Call Functions.
    ResultFun(myString, reversedStringFile);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Reversed String Program (Version 1) ..\n\n");
}

// Receive String - Function.
void receiveStringFun(char myStr[100])
{
    printf("Please enter a string: ");
    scanf("%[^\n]", myStr);

    // printf("\n%s\n\n", myStr);
}

// Print Revers String In File - Function.
void printReversStringInFileFun(FILE *revStrFil, char myStr[100])
{
    // Create File.
    revStrFil = fopen("reversed_string.txt", "w");

    // Print Revers String In File.
    for (int i = strlen(myStr) - 1; i >= 0; i--)
    {
        fprintf(revStrFil, "%c", myStr[i]);
    }

    // Close File.
    fclose(revStrFil);
}

// Result - Function.
void ResultFun(char myStr[100], FILE *revStrFil)
{
    welcomeMessageFun();
    receiveStringFun(myStr);
    printReversStringInFileFun(revStrFil, myStr);
}

//* End Function ..
