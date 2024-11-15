

//* Reverse And Remove Vowels Program (Version 1).

/*
 * Write a program to reverse and remove the vowels from a given string.
 */

/*
! Input:
! Please enter a string: Hello World

! Output:
! dlroW olleH
! String without vowels: dlrw llh
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
    printf("\n\nYou welcome in Reverse And Remove Vowels Program (Version 1) ..\n\n");
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

// Remove Vowels - Function.
void removeVowelsFun(char myStr[])
{
    int myStrLen = strlen(myStr);

    printf("\nString without vowels: ");
    for (int i = myStrLen - 1; i >= 0; i--)
    {
        if (myStr[i] == 'A' || myStr[i] == 'a' || myStr[i] == 'E' || myStr[i] == 'e' || myStr[i] == 'I' || myStr[i] == 'i' || myStr[i] == 'O' || myStr[i] == 'o' || myStr[i] == 'U' || myStr[i] == 'u')
        {
            continue;
        }
        else
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
    removeVowelsFun(myStr);

    printf("\n\n");
}

//* End Function ..
