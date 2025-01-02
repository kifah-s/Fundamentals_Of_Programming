

//* Reverse String Program (Version 1).

/*
* Write a program with a function reverseString that takes a string as input,
* and prints its characters in reverse order,
* In the main function, take a string as input,
* call the reverseString function, and display the reversed string.

! Input:
! Please enter a string: Hello

! Output:
! Reversed String: olleH
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(char myStr[]);

int main()
{
    // Declare Variables.
    char myString[25];

    // Call Functions.
    resultFun(myString);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Reverse String Program (Version 1) ..\n\n");
}

// Get String - Function.
void getStringFun(char myStr[])
{
    printf("Please enter a string: ");
    scanf("%s", myStr);
}

// Reverse String - Function.
int reverseStringFun(char myStr[])
{
    printf("Reversed String: ");
    for (int i = strlen(myStr) - 1; i >= 0; i--)
    {
        printf("%c", myStr[i]);
    }
}

// Result - Function.
void resultFun(char myStr[])
{
    printWelcomeMessageFun();
    getStringFun(myStr);
    reverseStringFun(myStr);

    printf("\n\n");
}
//* End Function ..
