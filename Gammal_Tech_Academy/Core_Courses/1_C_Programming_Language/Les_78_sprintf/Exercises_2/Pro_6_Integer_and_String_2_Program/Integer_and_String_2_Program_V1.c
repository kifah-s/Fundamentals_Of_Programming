

//* Integer and String 2 Program (Version 1).

/*
* Write a program that takes an integer and a string as input from the user,
* and uses sprintf to format them.

! Input:
! Please enter an integer: 250
! Please enter a string: Gammal

! Output:
! Formatted: 250 Gammal
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int num, char str[], char myStr[]);

int main()
{
    // Declare Variables.
    int number = 0;
    char string[50];
    char myString[100];

    // Call Functions.
    resultFun(number, string, myString);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Integer and String 2 Program (Version 1) ..\n\n");
}

// Get Integer - Function.
int getIntegerFun(int num)
{
    printf("Please enter an integer: ");
    scanf("%d", &num);

    return num;
}

// Get String - Function.
void getStringFun(char str[])
{
    printf("Please enter a string: ");
    scanf("%s", str);
}

// Concatenate Integer and String - Function.
void concatenateIntegerAndStringFun(int num, char str[], char myStr[])
{
    // sprintf(myStr, "Formatted: %s %s", num, str);
    sprintf(myStr, "%d %s", num, str);
}

// Result - Function.
void resultFun(int num, char str[], char myStr[])
{
    printWelcomeMessageFun();
    num = getIntegerFun(num);
    getStringFun(str);
    concatenateIntegerAndStringFun(num, str, myStr);

    // printf("\n%s\n\n", myStr);
    printf("\nFormatted: %s\n\n", myStr);
}
//* End Function ..
