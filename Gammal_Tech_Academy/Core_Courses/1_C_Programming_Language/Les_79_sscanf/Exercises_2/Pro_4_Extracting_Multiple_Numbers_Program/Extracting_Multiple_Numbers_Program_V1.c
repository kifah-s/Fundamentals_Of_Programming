

//* Extracting Multiple Numbers Program (Version 1).

/*
* Extracting Multiple Numbers from a String.

! Output:
! First Number: 25
! Second Number: 42
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(char myStr[], int firNum, int secNum);

int main()
{
    // Declare Variables.
    char myString[] = "25 42 kifah";
    int firstNumber = 0, secondNumber = 0;

    // Call Functions.
    resultFun(myString, firstNumber, secondNumber);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Extracting Multiple Numbers Program (Version 1) ..\n\n");
}

// Extracting Number - Function.
void extractingNumberFun(char myStr[], int firNum, int secNum)
{
    sscanf(myStr, "%d %d", &firNum, &secNum);
    printf("First Number: %d\n", firNum);
    printf("Second Number: %d\n\n", secNum);
}

// Result - Function.
void resultFun(char myStr[], int firNum, int secNum)
{
    printWelcomeMessageFun();
    extractingNumberFun(myStr, firNum, secNum);
}
//* End Function ..
