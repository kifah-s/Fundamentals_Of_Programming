

//* Reverse And Print Vowels Program (Version 1).

/*
 * Create a program to reverse and extract the vowels from a given string.
 */

/*
! Input:
! Please enter a string: Hello World

! Output:
! dlroW olleH
! Vowels in the reversed string: ooe
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void printResultFun(char myStr[]);

int main()
{
    // Declare Variables.
    char myString[50];

    // Call Functions.
    printResultFun(myString);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Reverse And Print Vowels Program (Version 1) ..\n\n");
}

// Receive string - Function.
void receiveStringFun(char myStr[])
{
    printf("Please enter a string: ");
    scanf(" %[^\n]", myStr);
}

// Reverse String - Function.
void reverseStringFun(char myStr[])
{
    int myStrLen = strlen(myStr);

    for (int i = myStrLen - 1; i >= 0; i--)
    {
        printf("%c", myStr[i]);
    }
}

// Print Vowels - Function.
int printVowelsFun(char myStr[])
{
    int myStrLen = strlen(myStr);

    printf("\nVowels in the reversed string: ");
    for (int i = 0; i < myStrLen; i++)
    {
        if (myStr[i] == 'A' || myStr[i] == 'a' || myStr[i] == 'E' || myStr[i] == 'e' || myStr[i] == 'I' || myStr[i] == 'i' || myStr[i] == 'O' || myStr[i] == 'o' || myStr[i] == 'U' || myStr[i] == 'u')
        {
            printf("%c", myStr[i]);
        }
    }
}

// Print Result - Function.
void printResultFun(char myStr[])
{
    welcomeMessageFun();
    receiveStringFun(myStr);
    reverseStringFun(myStr);
    printVowelsFun(myStr);

    printf("\n\n");
}

//* End Function ..
