

//* Reverse And Count Vowels Program (Version 1).

/*
 * Create a program to reverse and count the number of vowels in a given string.
 */

/*
! Input:
! Please enter a string: Hello World

! Output:
! dlroW olleH
! Number of vowels: 3
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
    printf("\n\nYou welcome in Reverse And Count Vowels Program (Version 1) ..\n\n");
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

// Count Vowels - Function.
int countVowelsFun(char myStr[])
{
    int counter = 0;
    int myStrLen = strlen(myStr);

    for (int i = 0; i < myStrLen; i++)
    {
        if (myStr[i] == 'A' || myStr[i] == 'a' || myStr[i] == 'E' || myStr[i] == 'e' || myStr[i] == 'I' || myStr[i] == 'i' || myStr[i] == 'O' || myStr[i] == 'o' || myStr[i] == 'U' || myStr[i] == 'u')
        {
            counter++;
        }
    }

    printf("\nNumber of vowels: %d\n\n", counter);
}

// Print Result - Function.
void printResultFun(char myStr[])
{
    welcomeMessageFun();
    receiveStringFun(myStr);
    reverseStringFun(myStr);
    countVowelsFun(myStr);
}

//* End Function ..
