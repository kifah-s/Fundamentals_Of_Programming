

//* Specified Character Program (Version 2).

/*
* Write a program to read a sentence until a specified character and print it.

! Input:
! Please Enter a sentence (stop a specified character): Hello World a Stop

! Output:
! sentence: Hello World a
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void printSentenceFun(char sen[50]);

int main()
{
    // Declare Variables.
    char sentence[50];

    // Call Functions.
    printSentenceFun(sentence);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Specified Character Program (Version 2) ..\n\n");
}

// Read Sentence - Function.
void readSentenceFun(char sen[50])
{
    printf("Please Enter a sentence (stop a specified character): ");
    scanf("%[^STOP]", sen);
}

// Print Sentence - Function.
void printSentenceFun(char sen[50])
{
    welcomeMessageFun();
    readSentenceFun(sen);

    printf("\nsentence: %s\n\n", sen);
}
//* End Function ..
