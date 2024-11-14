

//* Reverse String Program (Version 1).

/*
 * Write a program to reverse a given string.
 */

/*
! Input:
! Please enter a string: Hello World

! Output:
! dlroW olleH
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void reverseStringFun(char myStr[]);

int main()
{
    // Declare Variables.
    char myString[50];

    // Call Functions.
    reverseStringFun(myString);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Reverse String Program (Version 1) ..\n\n");
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
    welcomeMessageFun();
    receiveStringFun(myStr);

    int myStrLen = strlen(myStr);

    printf("\n");
    for (int i = myStrLen - 1; i >= 0; i--)
    {
        printf("%c", myStr[i]);
    }

    printf("\n\n");
}

//* End Function ..
