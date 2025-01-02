

//* Find String Length Program (Version 1).

/*
* Write a program with a function findStringLength that takes a string as input and returns its length,
* In the main function, take a string as input, call the findStringLength function,
* and print the length of the string.

! Input:
! Please enter a string: kifah

! Output:
! Length of the string: 5
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(char myStr[], int len);

int main()
{
    // Declare Variables.
    char myString[100];
    int length = 0;

    // Call Functions.
    resultFun(myString, length);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Find String Length Program (Version 1) ..\n\n");
}

// Get String - Function.
void getStringFun(char myStr[])
{
    printf("Please enter a string: ");
    scanf("%s", myStr);
}

// Find String Length - Function.
int findStringLengthFun(char myStr[], int len)
{
    len = strlen(myStr);

    return len;
}

// Result - Function.
void resultFun(char myStr[], int len)
{
    printWelcomeMessageFun();
    getStringFun(myStr);
    len = findStringLengthFun(myStr, len);
    printf("Length of the string: %d\n\n", len);

    // printf("\n\n");
}
//* End Function ..
